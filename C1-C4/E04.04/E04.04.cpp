

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
/*
* 统计一个文件中有多少 lines word and characters 
*/

//一行行读文件





void countFileContent(const string& filename) {
    ifstream file(filename);  // 打开文件
    if (!file) {
        cerr << "Error: Unable to open file " << filename << endl;
        return;
    }

    int lineCount = 0;       // 行数
    int charCount = 0;       // 字符数
    int wordCount = 0;       // 单词数

    string line;
    while (getline(file, line)) {  // 按行读取
        lineCount++;
        charCount += line.length();  // 累加字符数（不包括换行符）

        // 使用 stringstream 分割单词 这个是重点
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();  // 关闭文件

    // 输出结果
    cout << "Lines: " << lineCount << endl;
    cout << "Characters: " << charCount << endl;
    cout << "Words: " << wordCount << endl;
}

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    countFileContent(filename);

    return 0;
}



