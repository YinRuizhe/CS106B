/*
解一元二次方程
   2
ax    +b x+ c =0
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


/* Function prototypes */

void getCoefficients(double& a, double& b, double& c);
void solveQuadratic(double a, double b, double c, double& x1, double& x2);
void printRoots(double x1, double x2);
void error(string msg);

int main()
{
	double a, b, c, r1, r2;
	getCoefficients(a, b, c);
	solveQuadratic(a, b, c, r1, r2);
	printRoots(r1, r2);
	return 0;

}
/*
Function: getCoefficients
Usage:getCofficeinets(a,b,c);
---------------------------------------
Reads in the coefficient of a quadratic equation into the reference parameters a ,b and c.

*/

void getCoefficients(double& a, double& b, double& c)
{
	cout << "Enter cofficents for the quadratic equation:" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
}

/*
* 这些相同的东西我就不写的剩下的内容在mit 软件工程的课程里练习，包括测试用例等等。
------------------
*/
void solveQuadratic(double a, double b, double c, double& x1, double& x2)
{
	if (a == 0) error("The codfficient a must be nonzero.");
	double disc = b * b - 4 * a * c;
	if (disc < 0)error("This equtaion has no real roots.");
	double sqrtDisc = sqrt(disc);
	x1 = (-b + sqrtDisc) / (2 * a);
	x2 = (-b - sqrtDisc) / (2 * a);
}

void printRoots(double x1, double x2)
{
	if (x1 == x2) {
		cout << "There is a double root at " << x1 << endl;
	}
	else
	{
		cout << "The roots are " << x1 << " and " << x2 << endl;
	}
}

void error(string msg)
{
	cerr << msg << endl;
	exit(EXIT_FAILURE);
}
