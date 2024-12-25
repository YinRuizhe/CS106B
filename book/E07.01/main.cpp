/*
 *
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include <iostream>
#include <math.h>

using namespace std;


int connonball(int n);

int main()
{
    cout<<"? n: ";
    int n;
    cin>>n;
    int x=connonball(n);
    cout <<"The number is " << x<<endl;
    return 0;
}

int connonball(int n){
    if(n==1){
        return 1;
    }else{
        return connonball(n-1)+pow(n,2);
    }
}

