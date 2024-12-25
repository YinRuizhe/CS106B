/*
* File E1.8
* -------------------
* 
*/

#include <iostream>
using namespace std;


/*
* Function:digitSum
* Usage:int num=digitSum(int n);
* --------------------------------------------
* computes the sum of hte digits in a integer
*/
int digitSum(int n);


/*
* Function:digitInverse
* Usage: int num=digitInverse(int n);
* -----------------------------------------
* output the inverse number
*/


int digitInverse(int n);

int main()
{
    cout << "This program reverses the digits in a integer." << endl;
    cout << "Enter a positive integer: ";
    int num;
    cin >> num;
    cout << "The reversed integer is " << digitInverse(num) << endl;
}



/*
* Implementation note: digitSum
*/
int digitSum(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int digitInverse(int n)
{
    int iN = 0;
    while (n > 0)
    {
        iN = iN*10 + n % 10;
        n = n / 10;
    }
    return iN;
}
