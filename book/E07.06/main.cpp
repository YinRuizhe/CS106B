/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include <iomanip>
using namespace std;

int additiveSequence(int n,int t0,int t1);
int fib(int n);
/*
 * count the funcation calls number
 */
int fib1(int n);
int fib2(int n);

int cout1,cout2=1;//用全局变量统计递归的调用次数。

int main()
{

    cout<<"This program counts the number of calles made by the two algorithms used to compute the Fibonacci sequence."<<endl;

    cout << " n    fib1    fib2 "<<endl;
    cout << "--    ----    ---- "<<endl;
    for(int i=0;i<12;i++){
        cout1=1;
        cout2=1;
        fib(i);
        additiveSequence(i,1,1);
        cout<<setw(2)<<i <<setw(8)<< cout1<<setw(8)<< cout2<<endl;
    }
    return 0;
}


int fib(int n){
    //静态变量统计递归的调用次数
    if(n<2) {
        return 1;
    }else{
        cout1+=2;
    return fib(n-1)+fib(n-2);
    }
}
//这个是一个高效的方法
int additiveSequence(int n,int t0,int t1){
    if(n==0)return t0;
    if(n==1)return t1;
    cout2+=1;
    return additiveSequence(n-1,t1,t0+t1);
}
