

/*
* 基因配对
*/
#include <iostream>
#include <string>
using namespace std;


/*
* 
*/
int findDNAMatch(string s1, string s2, int start = 0);


int main()
{
    string DNA = "TAACGGTACGTC";
    string sDNA = "TGC";
    
    cout << findDNAMatch(DNA, sDNA);
    cout << sDNA;

}

/*
*------------------------------
* A-T    C-G
*/
int findDNAMatch(string s1, string s2, int start)
{
    for (char& ch : s2) {
        switch (ch)
        {
        case 'A': ch = 'T';break;
        case 'T': ch = 'A';break;
        case 'C': ch = 'G';break;
        case 'G': ch = 'C';break;
        }
    }

    return s1.find(s2);
}


