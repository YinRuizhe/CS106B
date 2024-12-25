

#include <iostream>
using namespace std;

int main()
{
    cout << "Calculate an approximation of pi"<<endl;

    long n;
    cout << "Enter the terms: ";
    cin >> n;
    double total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            total = total - 1 / (double)(2 * i - 1);
        }
        else
        {
            total = total + 1 / (double)(2 * i - 1);
        }
    }
    total = total * 4.0;
    cout << "The approximation of PI is: " << total << endl;
    
}
