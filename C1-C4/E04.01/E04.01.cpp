// E04.01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#define M_PI 3.14159256357589

using namespace std;
double degreesToRadians(double degrees) {
	return degrees * M_PI / 180.0;
}

int main()
{
    cout << " theta |  sin(theta) |  cos(theta) |" << endl;
    cout << "-------+-------------+-------------+" << endl;

	for (double theta = -90; theta <= 90; theta+=15)
	{
		double radians = degreesToRadians(theta);
		cout << right<<fixed;
		cout << setw(5) << setprecision(0) << theta <<"  |";

		cout << setw(12) << setprecision(7)<<sin(radians) << " |";
		cout << setw(12) << setprecision(7)<<cos(radians) << " |"<<endl;
	}
}

