/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include <iostream>
#include <iomanip>
using namespace std;


int additiveSequence(int n,int t0,int t1);

int main()
{
    cout<<"This program lists the Fibonacci sequence."<<endl;
    for(int i=0;i<20;i++){
        if(i<10) cout<<" ";
        cout <<"fib("<<i<<")";
        cout << " = " <<setw(4)<<additiveSequence(i,1,1)<<endl;
    }

    return 0;
}

//这个是一个高效的方法
int additiveSequence(int n,int t0,int t1){
    if(n==0)return t0;
    if(n==1)return t1;
    return additiveSequence(n-1,t1,t0+t1);
}
