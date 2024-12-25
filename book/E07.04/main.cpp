/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"

using namespace std;

// The greatest common divisor

int gcd(int x,int y);
int main()
{
    int x;
    int y;
    cout<< "Greatest common divisor"<<endl;
    cout <<"? x:";
    cin>>x;
    cout <<"? y:";
    cin>>y;

    cout<<"(x,y)=" <<gcd(x,y);
    return 0;
}

int gcd(int x,int y){
    if(x<y){//保证x>y
        int temp;
        temp=y;
        y=x;
        x=temp;
    }
    if(y%x==0){
        return y;
    }else{
       return gcd(x-y,y);
    }
}

