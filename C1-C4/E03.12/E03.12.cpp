
#include <iostream>
#include <string>

using namespace std;

/*
* 单词变复数
* ---------------------
*  If the word ends in s, x, z,ch or sh, add es to the word;
*  If the word ens in a y peceded by a consonant, change the y to ies;
*  In all other cases, add just an s.
*/
bool endsWith(string str, string suffix);
bool endsWith(string str, char suffix);
string createRegularPlural(string str);

int main()
{
    string array[8] = { "box" ,"boss","whizz","branch" ,"fish","baby","boy", "girl" };


    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " Plural is " << createRegularPlural(array[i]) << endl;
    }
}

string createRegularPlural(string str)
{
    if (endsWith(str,'s')|| endsWith(str, 'x') || endsWith(str, 'z') || endsWith(str, "ch") || endsWith(str, "sh"))
    {
        return str + "es";
    }
    else if (endsWith(str,'y'))
    {
        char precededChar = str[str.length() - 2];
        if (precededChar=='a'|| precededChar == 'e'||precededChar == 'i'||precededChar == 'o'||precededChar == 'u')
        {
            return str + "s";
        }
        else
        {
            str.erase(str.length()-1, 1);
            return str + "ies";
        }
    }
    else
    {
        return str + "s";
    }
    
}

bool endsWith(string str, string suffix)
{
    int l = suffix.length();
    if (str.substr(str.length() - l, l) == suffix)
    {
        return true;
    }
    return false;
}

bool endsWith(string str, char suffix)
{
    if (str[str.length() - 1] == suffix)
    {
        return true;
    }
    return false;
}

