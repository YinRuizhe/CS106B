/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;


int fib(int n);


int main()
{
    int n=10;
    for(int i=1;i<n;i++){
        cout<<i<<";";
        cout<<fib(i)<<endl;
    }

    return 0;
}

int fib(int n){
    int first=1;
    int second=1;
    int third;
    if(n==1||n==2){
        return 1;
    }
    for(int i=2;i<n;i++){
        third=first+second;
        first=second;
        second=third;

    }
    return third;

}
