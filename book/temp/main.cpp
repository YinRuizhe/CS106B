/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include "vector.h"
using namespace std;

void printVector(Vector<int> & vec);
int main()
{
    Vector<int> vec;
    vec.add(10);
    vec.add(20);
    vec.add(30);
    vec.insert(2,30);
    vec.set(3,70);
    printVector(vec);
    return 0;
}

void printVector(Vector<int> & vec){
    cout << "[";
    for (int i = 0; i < vec.size();
         i++) { if (i > 0) cout << ", ";
        cout << vec[i];
    }
    cout << "]" << endl;
}
