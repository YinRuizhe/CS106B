
#include <iostream>
#include <string>
using namespace std;


/*
* ---------------
* returns a new string formed by removing all white space characters from the begining and end of str.
*/
string mytrim(string str);


int main()
{
    string s1 = " 12345 sfjsle  ajslei   sddf   ";
    string s2 = mytrim(s1);
    cout << s2;
    cout << "123";
}



string mytrim(string str)
{
    string result;
    for (int i = 0; i <str.length(); i++)
    {
        if (str.at(i)==' ') {
            str.erase(i, 1);
            i--;//每删除一个减一个，防止越界
        }
            
    }
    result = str;
    return result;
}
