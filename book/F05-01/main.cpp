/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"

#include "filelib.h"
#include "vector.h"
#include <fstream>

using namespace std;

void readEntireFile1(istream &is,Vector<string> & lines);

int main()
{
    ifstream infile;
    Vector<string> lines;
    promptUserForFile(infile,"Input file: ");
    readEntireFile(infile,lines);
    infile.close();
    for (int i=lines.size()-1;i>=0;i--){
        cout<< lines[i]<<endl;
    }
    return 0;
}

void readEntireFile1(istream & is,Vector<string> & lines){
    string line;
    if(!is){
        error("error");
    }
    while (getline(is,line)){
        lines.add(line);
    }
}
