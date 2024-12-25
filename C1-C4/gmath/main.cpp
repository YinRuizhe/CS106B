// gmath.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 常量导出练习
*/
#include <iostream>
#include "gmath.h"
using namespace std;
int main()
{
    double myangle;
    cout << "please enter an angle: ";
    cin >> myangle;
    cout << "sin(30)=" << sinDegrees(myangle) << endl;
    cout << "cos(30)=" << cosDegrees(myangle) << endl;
    cout << "The radians of the angle is " << toRadians(myangle) << endl;
}

