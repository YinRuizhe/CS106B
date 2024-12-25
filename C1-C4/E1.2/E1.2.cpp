// E1.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	double m;
	double i;
	double f;
	cout << "Convert meter to feet and inches" << endl;
	cout << "Meters: ";
	cin >> m;
	i = m / 0.0254;
	f=(int)i / 12;
	i = i - f * 12;
	cout << f << " feet and " << i << " inches" << endl;
}
