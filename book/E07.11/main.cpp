/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;

string integerToString(int n);

int main()
{
    cout<< integerToString(123);
    return 0;
}

string integerToString(int n){

    if(0<n&&n<10){
        return string(1,'0'+n) ;
    }else{
        return integerToString(n/10)+string(1,'0'+(n%10));
    }
}
