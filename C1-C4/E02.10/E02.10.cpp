

#include <iostream>
#include "combinatorics.h"
using namespace std;
int main()
{
	int n;
	int k;
	cout << " ? n: ";
	cin >> n;
	cout << " ? k: ";
	cin >> k;

	cout << "P(n,k)= " << combinations(n, k) << endl;
}

