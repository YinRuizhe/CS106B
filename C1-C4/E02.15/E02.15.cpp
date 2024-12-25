

#include <iostream>
#include "random.h"
using namespace std;
/*
* Write a program that simulates flipping a coin repeatedly and continues until three consecutive heads are tossed.
*/

int main()
{
    bool arr[3] = { false,false,false };//存最后三次的情况，flase为heads
	int sum = 0;
	while (true)
	{
		if (randomChance(0.5))
		{
			cout << "heads" << endl;
			arr[2] = arr[1];
			arr[1] = arr[0];
			arr[0] = true;
		}
		else
		{
			cout << "tails" << endl;
			arr[2] = arr[1];
			arr[1] = arr[0];
			arr[0] = false;
		}
		sum++;
		if (arr[0] && arr[1] && arr[2]) break;
	}
	cout << "It took " << sum << " flips to get 3 consecutive heads";
}

