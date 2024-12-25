

#include <iostream>
#include <string>
#include <cctype>
#include "error.h"
using namespace std;


string mySubStr(string str, int pos, int n);
string mySubStr(string str, int pos);

int main()
{
    string s1 = "abcdefghi";

    cout << mySubStr(s1,4)<<endl;
    cout << s1.substr(4) << endl;
    //cout << mySubStr(s1, 10) << endl;
    cout << s1.substr(3,2) << endl;
    cout << mySubStr(s1,3,2)<<endl;
    cout << mySubStr(s1, 3, 9) << endl;
    cout << s1.substr(3, 9) << endl;

}

string mySubStr(string str, int pos, int n)
{
    if (pos>= str.length())
    {
        error("ERROR!!! pos is too big");
        return string();
    }
    else
    {
        int end;
        if (pos+n>=str.length())
        {
            end = str.length();
        }
        else
        {
            end = pos + n;
        }
        string result = "";
        for (int i = pos; i < end; i++)
        {
            result += str[i];
        }
        return result;

    }
    
}

string mySubStr(string str, int pos)
{
    
    if (pos >= str.length())
    {
        error("ERROR!!!  pos is too big");
        return string();
    }
    else
    {
        string result = "";
        for (int i = pos; i < str.length(); i++)
        {
            result += str[i];
        }
        return result;
    }
    
    
}
