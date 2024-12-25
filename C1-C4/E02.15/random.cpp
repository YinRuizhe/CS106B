#include "random.h"
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

/*Private function prototype*/
void initRandomSeed();
/*
* Implementation notes:randomInteger
* ------------------------------------------
* 4setps
* 1. Generate a random real number d in the range [0....1)
* 2. Scale the number to the range[0 .. N) where N is the number of values.
*/

int randomInteger(int low, int high)
{
    initRandomSeed();
    double d = rand() / (double(RAND_MAX) + 1);
    double s = d * (double(high) - low + 1);
    return int(floor(low+s));
}


/*
* Implementation notes: randomReal
* -------------------------------
* The code for randomReal is similar to that for randomInteger,
* without the final conversion step.
*/


double randomReal(double low, double high)
{
    initRandomSeed();
    double d = rand() / (double(RAND_MAX) + 1);
    double s = d * (high - low);
    return low+s;
}

/*
* Implementation notes:randomChance
* ------------------------------------------------
*/
bool randomChance(double p)
{
    initRandomSeed();
    return randomReal(0,1)<p;
}

/*
* Implementation notes:setRandomSeed
* ---------------------------------------------
*/

void setRandomSeed(int seed)
{
    initRandomSeed();
    srand(seed);
}

/*
* ---------------------
* the seed is set to the current time
*/
void initRandomSeed()
{
    static bool initialized = false;
    if (!initialized) {
        srand(int(time(NULL)));
        initialized = true;
    }
}
