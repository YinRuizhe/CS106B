
/*
* File: E03.04.cpp
* 
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
* Function:capitalize
* Usage:
* ------------------------------
* 
*/

string capitalize(string str);

int main()
{
    
	cout << capitalize(string("BOOLEAN"))<<endl;
	cout << capitalize(string("boolean"))<< endl;
}


/*
* implementation notes:
* ------------------------------
*/
string capitalize(string str)
{

	for (int i = 0; i < str.length(); i++)
	{
		if (i==0)
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
    return str;
}
