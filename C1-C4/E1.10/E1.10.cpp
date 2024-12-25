

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter a number: ";
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            //even
            cout <<" " << n << " is even";
            n = n / 2;
            cout<<", so I divide it by 2 to get "<<n<<endl;
        }
        else
        {//odd
            cout << " " << n << " is odd";
            n = n * 3 + 1;
            cout << ", so I multiply by 3 and add 1 to get " << n << endl;
            
        }
    }
}

