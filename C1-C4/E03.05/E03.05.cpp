


#include <iostream>
#include <string>

using namespace std;

int computeScore(string str);

int main()
{
	cout << "Enter a string :";
	string str;
	cin >> str;
	cout << "SCORE is : " << computeScore(str) << endl;

}

int computeScore(string str)
{
	int score = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		switch (ch)
		{
		case 'A':  case 'E': case 'I' :case 'L': case 'N': case 'O': case 'R': case 'S': case 'T' : case 'U':
			score+=1;
			break;
		case 'D': case 'G':
			score += 2;
			break;
		case 'B': case 'C': case 'M' :case 'P':
			score += 3;
			break;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
			score += 4 ;
			break;
		case 'K':
			score += 5;
			break;
		case 'J': case 'X':
			score += 8;
			break;
		case 'Q': case 'Z':
			score += 10;
			break;
		default:
			break;
		}
		
	}
	return score;
}
