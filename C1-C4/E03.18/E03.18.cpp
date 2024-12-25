

/*
* 18-19
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
* -----------------
* 输入key,进行加密或解密转换
*/
string convert(string & message, const string key);


/*
* Function:invertKey
* ---------------------
* 输入加密key 输出解密key
*/
string invertKey(const  string & key);

int main()
{
    string key = "QWERTYUIOPASDFGHJKLZXCVBNM";
    cout << invertKey(key)<<endl;
    cout << "Enter a message :";
    string message;
    getline(cin, message);

    cout << "Encodeed message :";
    cout << convert(message, key);
}

string convert(string& message, const string key)
{
    string decode = message;
    for (char& ch : decode) {
        if (isalpha(ch)) {
            ch = key[ch - 'A'];
        }
    }

    return decode;
}

string invertKey(const string & key)
{
    //这个需要排序
    string key2(26, ' ');
    for (int i = 0; i < 26; i++)
    {
        char enChar = key[i];
        int index = enChar - 'A';
        key2[index] = 'A' + i;
    }
    return key2;
}
