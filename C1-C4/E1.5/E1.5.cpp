
#include <iostream>
using namespace std;

const int sentinel = 0;
int main()
{
    int max = 0;
    int temp;
    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter " << sentinel << " to signal the end of hte list." << endl;
    while (true)
    {
        cout << " ? ";
        cin >> temp;
            if (temp == sentinel) break;
        if (temp>max)
        {
            max = temp;
        }
    }
   
    std::cout << "The largest value was "<< max<<endl;
}


