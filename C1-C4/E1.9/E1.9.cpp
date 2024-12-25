

#include <iostream>
using namespace std;

int main()
{

    //不使用质数表
    int n;
    cout << "This program factors a number." << endl;
    cout << "Enter number to be factored: ";
    cin >> n;
    int num = n;
    for (int i = 2; i <num;)
    {
        if (n % i == 0) {
            if (n / i == 1) {
                cout << i;
            }
            else
            {
                cout << i << " x ";
            }
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    cout << "";
}

