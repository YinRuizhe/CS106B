
#include <iostream>
#include <string>
using namespace std;

string addCommas(string digits);

int main() {
	while (true){
		string digits;
		cout << "Enter a number: ";
		getline(cin, digits);
		if (digits == "") break;
		cout << addCommas(digits) << endl;
	}
	return 0;
}

string addCommas(string digits)
{
	int i = 3;
	while (i<digits.length())
	{
		digits.insert(digits.length() - i, ",");
		i = i + 4;
	}
	return digits;
}
