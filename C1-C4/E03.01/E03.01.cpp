
#include <iostream>
#include <string>
using namespace std;

/*
* Function:
* Usage:
* ------------------------
* 
* 
*/


bool endsWith(string str, string suffix);
bool endsWith(string str, char suffix);

int main()
{
    string s1 = "abcdeft";
    string s2 = "eft";
    char s = 'a';
    if (endsWith(s1,s))
    {
        cout << "end with " << s2;
    }
    else
    {
        cout << "No ";
    }
}

bool endsWith(string str, string suffix)
{
    int l = suffix.length();
    if (str.substr(str.length()-l, l) == suffix)
    {
        return true;
    }
    return false;
}

bool endsWith(string str, char suffix)
{
    if (str[str.length()-1]==suffix)
    {
        return true;
    }
    return false;
}


