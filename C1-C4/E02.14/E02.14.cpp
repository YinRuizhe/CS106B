
/*
* 蒙特卡洛积分
* monte carlo integration
*/
#include <iostream>
#include "random.h"
using namespace std;


int main()
{
	std::cout << "It's a strategy for approximating the value of PI" << endl;
	int n = 100000;//sim num
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		double x = randomReal(-1, 1);
		double y = randomReal(-1, 1);
		if ((pow(x,2)+pow(y,2))<1)
		{
			sum++;
		}
	}
	
	double apporxPI =4.0* sum / (double)n;

	cout << "Sim PI is " << apporxPI << endl;

}

