

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void removeLetters(istream& is, ostream& os, string letters);

int main()
{
	ifstream infile;
	infile.open("TheWonderfulO.txt");
	ofstream ouFile;
	ouFile.open("TheWonderful.txt");
	string deleteLetters = "aeiou";
	if (infile.is_open() && ouFile.is_open())
	{
		removeLetters(infile, ouFile, deleteLetters);
	}
	infile.close();
	ouFile.close();


}

void removeLetters(istream& is, ostream& os, string letters)
{
	char ch;
	//按字母读
	while (is.get(ch)){
		bool flag = false;
		for (int i = 0; i < letters.length(); i++){
			if (ch==letters[i]||ch==(char(letters[i])-32)) {
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			os << ch;
			cout << ch;
		}
	}

}
