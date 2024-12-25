// E2-RandmTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "random.h"
using namespace std;

int main()
{
	int d1, d2;
	d1 = randomInteger(1, 6);
	d2 = randomInteger(1, 6);
	cout << "d1: "<< d1<<"  d2: "<<d2 << endl;
	//这个非常的奇怪，第一个数永远是4

	

	

}

