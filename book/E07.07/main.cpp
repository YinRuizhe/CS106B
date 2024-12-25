/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;


int digitSum(int n);

int main()
{
    int n;
    while(true){
        cout<<"? n :";
        cin>>n;
        cout<<digitSum(n)<<endl;
    }
    return 0;
}

int digitSum(int n){
    if(n<10){
        return n;
    }else{
        return n%10+digitSum(n/10);
    }
}
