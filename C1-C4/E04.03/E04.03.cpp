

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("test.txt");
    if (infile.is_open())
    {
        cout << "successful" << endl;
    }
    string line;
    int count=0;
    string longline;
    while (getline(infile,line))
    {
        if (line.length() > count) {
            count = line.length();
            longline = line;
        };
        cout << line << endl;
    }
    cout << "The longest line is " << endl;
    cout << longline << endl;

}

