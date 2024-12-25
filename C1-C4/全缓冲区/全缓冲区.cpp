// 全缓冲区.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	/*
    ofstream outfile("test.txt");
	for (int  n = 0; n < 4096; n++)
	{
		outfile << 'a'; 
	}
	system("PAUSE");

	outfile << 'b';//满4kb后开始I/O并刷新缓冲区

	system("PAUSE");
	return 0;
	*/

	char c;
	c = getchar();
	cout << c << endl;
	while ((c=getchar())!='\n')
	{
		cout << "," << c << endl;
	}

}

