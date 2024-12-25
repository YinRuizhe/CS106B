
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isSentencePalindrome(string str);

int main()
{
    cout << "This program tests for sentense palindromes."<<endl;
    cout << "Enter a sentence: ";
    string str;
    cin >> str;
    if (isSentencePalindrome(str))
    {
        cout << "That sentence is apalindrome." << endl;
    }
    else
    {
        cout << "This sentence is not a palindrome." << endl;
    }
}

bool isSentencePalindrome(string str)
{
    string pure = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
            {
                pure += tolower(str[i]);
            }
        }
    }
    int  n = pure.length();
    for (int i = 0; i < n/2; i++)
    {
        if (pure[i] != pure[n - i - 1]) return false;
    }
    return true;
}
