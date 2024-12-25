

/*
* 
* 移动字母加密，不改变字母的大小写，只改变字母
*/
#include <iostream>
#include <string>
using namespace std;

string encodeCaesarCipher(string str, int shift);
string encodeCaesarCipher2(const string & message, int shift);

int main()
{
	std::cout << "This program enecodes a message using a Caesar cipher\n";
	cout << "Enter the number of character positions to shift: ";
	int shift;
	cin >> shift;

	//cin.ignore();//这里为什么要cin.ignore() 因为 cin 不会处理'\n'  这个仍然在缓冲区内，然后getline并不会对缓冲区内第一个换行符视而不见，所以会立即读
	//但是什么东西都没有。
	//cin.ignore()表示 提取缓冲区的内容并忽略，直到 ch
	//默认参数是cin.ignore(1,EOF);
	cin.ignore(1, '\n');
	cout << "Enter a message: ";
	string message;
	getline(cin,message);
	cout << "Encoded message: ";
	cout << encodeCaesarCipher2(message, shift);
}

string encodeCaesarCipher2(const string& message, int shift) {//这个用foreach 更加的好
	string encoded = message;
	for (char &ch : encoded) {//如果要直接改变其中，就要使用引用。
		if (isalpha(ch)) {
			char base = islower(ch) ? 'a' : 'A';
			ch = (shift>0)?(ch - base + shift) % 26 + base: (ch - base + shift) % 26 + base+26;
		}
	}
	return encoded;
}

string encodeCaesarCipher(string str, int shift)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			if (str[i] + shift > 'Z')
			{
				str[i] = str[i] + shift - 26;
			}
			else if (str[i] + shift < 'A')
			{
				str[i] = str[i] + shift + 26;
			}
			else
			{
				str[i] = str[i] + shift;
			}
		}
		else if (islower(str[i]))
		{
			if (str[i] + shift > 'z')
			{
				str[i] = str[i] + shift - 26;
			}
			else if (str[i] + shift < 'a')
			{
				str[i] = str[i] + shift + 26;
			}
			else
			{
				str[i] = str[i] + shift;
			}
		}
	}
	return str;
}
