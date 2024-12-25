
#include <iostream>
#include <string>

using namespace std;

/*
* Function:acronym
* Usage:
* ----------------------------
* 首字母缩略
* self-contained as two words 
* 
*/
string acronym(string str);

int main()
{
    cout << acronym(string("self-contained underwater breathing apparatus"));
}

string acronym(string str)
{
    string word="";
    word += str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i]=='-'|| str[i]==' ')
        {
            word += str[i + 1];
        }
    }
    return word;
}
