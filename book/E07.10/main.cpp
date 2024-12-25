/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;


string reverse(string str);

int main()
{
    cout<< reverse("programsg")<<endl;
    return 0;
}

string reverse(string str){
    if(str.length()==1){
        return str;
    }else{
        return str[str.length()-1]+reverse(str.substr(1,str.length()-2))+str[0];
    }
}
