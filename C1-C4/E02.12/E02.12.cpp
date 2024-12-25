

/*
* RandomAverage
*/

#include <iostream>
#include "random.h"
using namespace std;


int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    double total = 0;
    double temp = 0;
    for (int i = 0; i < x; i++)
    {
        temp = randomReal(0.0, 1.0);
        total = total + temp;
        cout << temp<<endl;
    }
    
    cout << "Average: " << total / (double)x << endl;
}

