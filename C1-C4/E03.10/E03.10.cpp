// E03.10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

string replaceAll(string str, char c1, char c2);
string replaceAll(string str, string s1, string s2);

int main()
{
    
    cout <<replaceAll("nannies", 'n', 'd')<<endl;
    cout << replaceAll("nannies", "nan", "bade") << endl;
}

string replaceAll(string str, char c1, char c2)
{
    for (int  i = 0; i < str.length(); i++)
    {
        if (str[i]==c1)
        {
            str[i] = c2;
        }
    }
    return str;
}


string replaceAll(string str, string s1, string s2)
{
    int pos =str.find(s1);
    if (pos ==-1)
    {
        return str;
    }
    str.replace(pos, s1.length(), s2);
    return str;
}
