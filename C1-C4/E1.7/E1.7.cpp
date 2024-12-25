

#include <iostream>
using namespace std;

/*
* Constant: SENTINEL
*/
const int SENTINEL = -1;


int main()
{
    cout << "This program adds a list of numbers and output average" << endl;
    cout << "Use " << SENTINEL << " to signal the end." << endl;
    int total = 0;
    int num = 0;
    double average = 0;
    while (true)
    {
        int value;
        cout << " ? ";
        cin >> value;
        if (value == SENTINEL) break;
        total = total+value;
        num++;
    }
    average = (double)total / num;
    cout << "The total is " << total << endl;
    cout << "The average score is " << average << endl;
    return 0;
}

