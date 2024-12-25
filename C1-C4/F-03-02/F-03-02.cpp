

/*
* File:PigLatin.cpp
* ----------------
* This program convers lines from English to Pig Latin.
* This dialect of Pig Latin applies the following rules:
* 
* 1. If the word contains no vowels, return to original word unchaged.
* 
* 2. If the word begins with a consonant, extract the set of consonats
* up to the first vowel, move that set of consonants to the end of the 
* word, and add "ay".
* 
* 3. If the word begins with a vowel, add "way" to the end of the word.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string lineToPigLatin(string line);
string wordToPigLatin(string word);
int findFirstVowel(string word);
bool isVowel(char ch);




int main()
{
    cout << "This program translates English to Pig Latin." << endl;
    string line;
    cout << "Enter English text: ";
    getline(cin, line);
    string translation = lineToPigLatin(line);
    cout << "Pig Latin output: " << translation << endl;
    return 0;
}

string lineToPigLatin(string line)
{
    string result;
    int start = -1;
    for (int i = 0; i < line.length(); i++)
    {
        char ch = line[i];
        if (isalpha(ch)) {//找空格，空格是 单词的开始
            if (start == -1) start = i;
        }else{
            if (start >= 0) {
                result += wordToPigLatin(line.substr(start, i - start));
                start = -1;
            }
            result += ch;
        }
    }
    if (start >= 0) result += wordToPigLatin(line.substr(start));
    return result;
}


/*
* Function: wordToPigLatin
* Usage: string translation=wordToPigLatin(word);
* -----------------------------------------------
* This function translate a word from English to Pig Latin using the 
* rules specified in the text. 
* The translated word is returned as the value of the function.
*/
string wordToPigLatin(string word)
{
    int vp = findFirstVowel(word);
    if (vp == -1) {
        return word;
    }
    else if (vp == 0) {
        return word + "way";
    }
    else
    {
        string head = word.substr(0, vp);
        string tail = word.substr(vp);
        return tail + head + "ay";
    }
}



/*
* Function: find First Vowel
* Usage: int k=findFirstVowel(word);
* ----------------------------------------------
* Returns the index position of the first vowel in word. 
* If word does not contain a vowel, findFirstVowel returns -1.
*/


int findFirstVowel(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (isVowel(word[i])) return i;
    }
    return -1;
}



/*
* Function: is Vowel
* Usage:if(isVowel(ch))
* --------------------------------------
* Returns true if the character ch is a vowel.
*/
bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A': case 'E': case 'I': case 'O':case 'U':
    case 'a': case 'e': case 'i': case 'o':case 'u':
        return true;
    default:
        return false;
    }
}
