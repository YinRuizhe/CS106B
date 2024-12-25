

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string promptUserForFile(ifstream& infile, string prompt = "");

int main()
{
	ifstream infile;
	promptUserForFile(infile, "Input file: ");
	char ch;
	while (infile.get(ch))
	{
		cout.put(ch);//一个个字符输出
	}
	infile.close();
	return 0;
}

string promptUserForFile(ifstream & infile, string prompt)
{
	while (true)
	{
		cout << prompt;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail()) return filename;
		infile.clear();//这个是必要的
		cout << "Unable to open that file. Try again." << endl;
		if (prompt == "") prompt = "Input file:";

	}
    return string();
}
