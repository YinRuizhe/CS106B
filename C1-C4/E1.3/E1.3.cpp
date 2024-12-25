// E1.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//gauss 1+2+...+100
#include <iostream>

int main()
{
	int total = 0;
	for (int i = 1; i <=100; i++)
	{
		total = total + i;
	}
    std::cout << "1+2+...+100 = "<<total<<std::endl;
}


