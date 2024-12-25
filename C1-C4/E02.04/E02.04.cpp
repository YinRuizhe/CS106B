
#include <iostream>
using namespace std;
#include <iomanip>

/*
* Function:windChill
* Usage: double t=windChill(t,v);
* ----------------------------------------------
* t: temperature (F)
* v: wind(mph)
* 
*/

double windChill(double t, double v);
int roundToNearestInt(double x);




int main()
{
    cout << "Calm"<< "| ";
    
    for (int K = 40; K >= -45; K = K - 5) {
        cout <<setw(3)<< K << " ";
    }
    cout << endl;
    cout << "----+------------------------------------------------------------------------" << endl;
    for (int j = 5; j <= 60; j=j+5)
    {
        cout << setw(4) << j << "| ";
        for (int i = 40; i >= -45; i = i - 5)
        {
            
            cout<<right<<fixed;
            cout << setw(3)<<setprecision(0)<<roundToNearestInt(windChill(i, j))<< " ";
        }
        cout << endl;
    }
}

/*
* Implementation notes:windChill
* ---------------------------------------------
* 
* 
*/

double windChill(double t, double v)
{
    //其他的包括0风速的情况与40f以上的温度返回错误的情况就不写了
    return 35.74+0.6215*t-35.75*pow(v,0.16)+0.4275*t* pow(v, 0.16);
}

/*
* implement note
* -------------------
* 注意负值的时候
* 在double转int的过程中会直接的truncated这个值
* 全部加0.5，然后truncated
* 如果是负数就
* truncaton always moves toward zero, rounding negative numbers requires you to subtract 0.5, rather than adding it.
*/
int roundToNearestInt(double x)
{

    return x > 0 ? int(x + 0.5) : int(x - 0.5);
}
