/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

/*
 * File:
 * -----------------
 * This program counts the frequency of letters in a data file.
 */

#include "console.h"
#include "simpio.h"

#include <iomanip>
#include <cctype>
#include "vector.h"
#include "filelib.h"

using namespace std;


int main()
{
    Vector<int> letterCounts(26);//26动态的数组
    ifstream infile;
    promptUserForFile(infile,"Input file: ");
    char ch;
    while(infile.get(ch)){
        if(isalpha(ch)){
            letterCounts[toupper(ch)-'A']++;
        }
    }
    infile.close();
    for(char ch='A';ch<='Z';ch++){
        cout<< setw(7)<<letterCounts[ch-'A']<< " " <<ch <<endl;//这种做法值得学习
    }
    return 0;
}
