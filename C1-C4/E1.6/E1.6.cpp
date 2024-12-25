
#include <iostream>
using namespace std;

const int sentinel = 0;
int main()
{
    int max1 = 0;
    int max2 = 0;
    int temp;
    cout << "This program finds the largest integer and second largest integer in a list." << endl;
    cout << "Enter " << sentinel << " to signal the end of hte list." << endl;
    while (true)
    {
        cout << " ? ";
        cin >> temp;
        if (temp == sentinel) break;
        if (temp > max1)
        {   
            max2 = max1;
            max1 = temp;
        }
    }

    cout << "The largest value was " << max1 << endl;
    cout << "The second largest value was " << max2 << endl;
}
