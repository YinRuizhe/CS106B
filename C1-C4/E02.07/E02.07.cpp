// E02.07.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
* sqrt algorithm
*/

#include <iostream>
using namespace std;

/*
* Function:
* Usage:
* ----------------------
* return a root of the x
* x>0
*/
double mySqrt(double x);

int main()
{
	double x;
    cout << "Enter a number: ";
	cin >> x;

	cout << "The root of " << x <<" is " << mySqrt(x) << endl;
}

double mySqrt(double x)
{
	double root;
	double g1;
	double g2;
	double precision=0.0000001;
	if (x>=0)
	{
		g1 = x / 2;
		g2 = x / g1;
		while (abs(g1-g2)>precision)
		{
			g1 = (g1 + g2) / 2;
			g2 = x / g1;
		}
		return (g1+g2)/2;
		
	}
	else
	{
		return 0.0;
	}
}
