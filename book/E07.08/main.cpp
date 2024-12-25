/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;

int digitalRoot(int n);
int digitSum(int n);
int main()
{
    int n;

        cout<<"? n :";
        cin>>n;
        cout<<digitalRoot(n)<<endl;

    return 0;
}


int digitalRoot(int n){
    static int count=1;//因为这个静态变量的存在
    if(digitSum(n)<10){
        return count;
    }else{
        count++;
        return digitalRoot(digitSum(n));
    }
}

int digitSum(int n){
    if(n<10){
        return n;
    }else{
        return n%10+digitSum(n/10);
    }
}
