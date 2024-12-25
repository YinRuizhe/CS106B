// E02.06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 判断一个数是不是质数
*/

#include <iostream>
using namespace std;

bool isPrime(int n);


int main()
{
	for (int i = 2; i < 100; i++)
	{
		if (isPrime(i))
		{
			cout << i << endl;
		}

	}
    
}

bool isPrime(int n)
{
	for (int i = 2; i*i <=n ; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
    return true;
}
