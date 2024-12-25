

#include <iostream>
#include <string>


using namespace std;
/*
* 删除字符串中的字母 remove有多个字母时一起删除。
*/
string removeCharactersBUG(string str, string remove);
string removeCharacters(string str, string remove);
string removeCharactersP2(string str, string remove);

int main()
{
	string s = "aooeui";
	string remove = "aei";
	cout << removeCharactersBUG(s, remove) << endl;
	cout << removeCharacters(s, remove) << endl;
	cout << removeCharactersP2(s, remove) << endl;

}
string removeCharacters(string str, string remove)
{
	string word = "";
	string tempword = str;
	for (int j = 0; j < remove.length(); j++)
	{
		word = "";
		for (int i = 0; i < tempword.length(); i++)
		{
			if (tempword[i] != remove[j])
			{
				word += tempword[i];//额外的空间储存
			}
		}
		tempword = word;
	}
	return tempword;
}

string removeCharactersP2(string str, string remove)
{
	int k = 0;
	while (k<str.length())//注意这个str一直在变化
	{
		bool flag = false;//单个字母是否在remove的字母的范围内
		for (int j = 0; j < remove.length(); j++)
		{
			if (str[k] == remove[j]) {//一但匹配其中的一个字母，就删除，然后跳出循环，对下一个字母进行操作
				str.erase(k, 1);//原地删除，节省空间
				flag = true;
			}
			if (flag) break; 
		}
		if (!flag) k++;//如果都没有被删除移动到下一个位置
	}
	return str;
}

string removeCharactersBUG(string str, string remove)
{
	//这是一个有问题的
	int k = 0;//辅助定位当前的位置
	//cout << str.length();
	int num = str.length();
	for (int i = 0; i < num; i++){//!!!!!!!!!问题就在str.length 这个东西会在一直的变化的。!!!!!!!!!
		cout << i << endl;
		//这里i无法取到str.length()-1
		bool flag = false;//决定该位置的字母是否被删除过
		for (int j = 0; j < remove.length(); j++){
			if (str[k] == remove[j]){//一但匹配其中的一个字母，就删除，然后跳出循环，对下一个字母进行操作
				str.erase(k, 1);//原地删除，节省空间
				k--;//因为删除字母后，后一个字母顶上来了，需要--定位真实的位置。
				flag = true;
			}
			if (flag) break;//这个跳出内循环不应该对外循环有影响，检测到字母后就不用再往下操作了，跳出对 remove中字符的循环
		}
		k++;//定位下一个字母;
	}
	return str;
}
