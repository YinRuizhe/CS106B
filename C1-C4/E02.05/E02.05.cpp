
/*
* find perfect number
*/


#include <iostream>
using namespace std;



/*
* Function: isPerfect
* Usage: bool a=isPerfect(n);
* -------------------------------------
* 自身所有的因数加起来等于自身的数，不包括n本身
*/

bool isPerfect(int n);

int main()
{

	for (int i = 1; i < 10000; i++)
	{
		if (isPerfect(i))
		{
			cout << i << endl;
		}

	}
}

bool isPerfect(int n)
{
	int total=0;
	for (int i = 1; i < n; i++)
	{
		if ((n % i)==0)
		{
			total = total + i;
		}
	}
	if (total==n)
	{
		return true;
	}
	else
	{
		return false;
	}

}
