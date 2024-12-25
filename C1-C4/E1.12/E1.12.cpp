/*
* calculate PI with divide a quator of cicle with lots of rectangle
*/
#include <iostream>
using namespace std;


int main()
{
    cout << "Calculate an approximation of pi" << endl;

    long n;
    cout << "Enter the terms: ";
    cin >> n;

    double r = 1.0;
    double area = 0;
    for (int i = 1; i <= n; i++) {
        double x = (2.0 * (double)i - 1) / (2.0 * (double)n);
        area = area + sqrt(1.0 - x*x);
    }

    area = area * 4.0/ (double)n;
    cout << "The approximation of PI is: " << area << endl;
}

