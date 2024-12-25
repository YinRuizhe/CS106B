// E03.09.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

string removeDoubledLetters(string str);
string removeDoubledLetters2(string str);
int main()
{
    string s = "bbrr";

    cout << removeDoubledLetters(s)<<endl;
    cout << removeDoubledLetters2(s) << endl;
}

string removeDoubledLetters2(string str)
{
    int k = 0;
    while (k < str.length() - 1) // 遍历字符串
    {
        if (str[k] == str[k + 1]) // 如果当前字符和下一个字符相同
        {
            str.erase(k, 1); // 删除当前字符
            // 注意：删除字符后，不需要k--，直接继续检查当前位置的字符即可
        }
        else
        {
            k++; // 如果没有删除字符，才移动到下一个字符
        }
    }
    return str;
}

string removeDoubledLetters(string str)
{
    int k = 0;
    int num = str.length()-1;
    for (int i = 0; i < num; i++)//还是这个问题这个str.length()是一直在变化的。不如上面的形式
    {
        if (str[k] == str[k + 1])
        {
            str.erase(k, 1);
            k--;
        }
        k++;
        
    }
    return str;
}
