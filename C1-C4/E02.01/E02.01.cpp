
#include <iostream>
using namespace std;


/*
* Function:Celsius Temperature Convert to Fahrenheit
* Usage: double f=C2F(c);
* -----------------------------------
* 
*/
double C2F(double c);


int main()
{
    double c;
    cout << "Celsius Temperature Convert to Fahrenheit" << endl;
    cout << "Enter a Celsius Temperature: ";
    cin >> c;
    double f;
    f = C2F(c);
    cout << "The Fahrenheit temperature is " << f << endl;
}

double C2F(double c)
{
    return c * 9 / 5  + 32;
}
