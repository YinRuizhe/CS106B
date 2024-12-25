

#include <iostream>

using namespace std;


/*
* Funtion: permutations
* Usge:
* -------------------------------------
* although it has mathematical formulation, but it's easy to can't calculate in computer.
*/
long permutations(int n, int k);



int main()
{
	int n;
	int k;
	cout << " ? n: ";
	cin >> n;
    cout << " ? k: ";
	cin >> k;

	cout << "P(n,k)= " << permutations(n, k) << endl;
}




/*
* implementation note:
* --------------------------------------
* 
*/
long permutations(int n, int k)
{
	long total = 1;
	for (int i = n-k+1; i <=n ; i++)
	{
		total = total * i;
	}
	return total;
}
