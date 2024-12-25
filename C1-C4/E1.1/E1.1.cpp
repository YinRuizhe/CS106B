// E1.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    double c;
    cout << "Celsius Temperature Convert to Fahrenheit" << endl;
    cout << "Enter a Celsius Temperature: ";
    cin >> c;
    double f;
    f = c*9 / 5 + 32;
    cout << "The Fahrenheit temperature is "<<f << endl;
}

