// ExportEnum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "direction.h"

using namespace std;
int main()
{
	enum Direction nowDirection;
	nowDirection = NORTH;
	cout << "Now the direction is " << directionToString(nowDirection) << endl;
	nowDirection=leftFrom(nowDirection);

	cout <<"Turn left and now the direction is " << directionToString(nowDirection) << endl;
	nowDirection = leftFrom(nowDirection);
	cout << "Turn left and now the direction is " << directionToString(nowDirection) << endl;

	nowDirection = rightFrom(nowDirection);
	cout << "Turn right and now the direction is " << directionToString(nowDirection) << endl;
}

