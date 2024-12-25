


/*
* 写一个函数用来删除C++注释
* 输入文件后同目录下产生一个新的文件
*
* 一个简单的实现
*/




#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void removeComments(istream& is, ostream& os);

//这个第一次接触的时候很难想，借助chatgpt写的。
int main()
{


	ifstream infile;
	infile.open("example.cpp");
	ofstream ouFile;
	ouFile.open("example_no_comments.cpp");

	if (infile.is_open() && ouFile.is_open())
	{
		removeComments(infile, ouFile);
	}


}

void removeComments(istream& is, ostream& os)
{
	//按行度
	string line;
	bool isBlockComment = false; //状态机，表示是否是block模式
	while (getline(is, line))
	{
		string result;//存放结果

		int i = 0;//行一开始 用于压缩空间
		while (i < line.length())
		{
			if (isBlockComment) {
				//搜索到是block,然后就开始搜索下一个匹配的'*/'
				int endBlock = line.find("*/", i);
				if (endBlock != -1)
				{
					//搜索到是block的结尾
					isBlockComment = false;
					i = endBlock + 2;
				}
				else
				{
					//没有搜索到，跳过整行,对下一行进行搜索。
					break;
				}
			}
			else
			{
				//非block模式，对行进行搜索，
				int singleLine = line.find("//", i);//找到开头
				int startBlock = line.find("/*", i);
				if (singleLine != -1 && (startBlock == -1 || singleLine < startBlock))
				{
					//说明这个是行模式 把//前的内容放进去。
					result += line.substr(i, singleLine - i);
					break;
				}
				else if (startBlock != -1) {
					isBlockComment = true;
					result += line.substr(i, startBlock - i);//说明是block模式，把/*之前的内容放进去
					i = startBlock + 2;
				}
				else
				{
					//整行的内容放进去
					result += line.substr(i);
					break;
				}
			}

		}
		if (!isBlockComment && !result.empty()) {
			cout << result;
			os << result << '\n';
		}
	}
}
