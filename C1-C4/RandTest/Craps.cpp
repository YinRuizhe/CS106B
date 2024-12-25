// RandTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "random.h"
using namespace std;

bool tryToMakePoint(int point);
int rollTwoDice();

/*
* craps游戏
* 两个色子，第一次摇点，1或11 玩家胜
* 第一次摇点2 或3或12 庄家胜
* 非首次摇点摇出7庄家胜 ，摇出和第一次相同的点数，玩家胜，直到分出胜负
* -----------------------------------
* 优化后，比如有基础的资金1000，然后决定每次的资金，然后不断的玩。
*/
int main()
{
	int money = 1000;// found
	int debt;//
	bool win=false;
	cout << "This program plays a game of craps." << endl;
	cout << "-------------------------------------" << endl;
	cout << "MONEY: " << money << endl;
	while (money > 0)
	{
		cout << "Enter the money you want to debt: ";
		cin >> debt;
		if (debt == 0) {
			win = true;
			goto WIN;
		}
		while (money - debt < 0)
		{
			if (debt == 0) {
				win = true;
				goto WIN;
			}
			cout << "You don't have such money, Please enter a new money" << endl;
			cout << "Enter the money you want to debt: ";
			cin >> debt;
		}

		int point = rollTwoDice();
		switch (point)
		{
		case 7: case 11:
			cout << "That's a natural. You win." << endl;
			money = money + debt;
			cout << "MONEY: " << money << endl;
			break;
		case 2: case 3: case 12:
			cout << "That's craps. You lose." << endl;
			money = money - debt;
			cout << "MONEY: " << money << endl;
			break;
		default:
			cout << "Your point is " << point << "." << endl;
			if (tryToMakePoint(point)) {
				cout << "You made your point. You win." << endl;
				money = money + debt;
				cout << "MONEY: " << money << endl;
			}
			else
			{
				cout << "You rolled a seven. You lose" << endl;
				money = money - debt;
				cout << "MONEY: " << money << endl;
			}
		}
	}
	WIN:
	if (win) {
		cout << "Congratulations!!! You leave with " << money << " money" << endl;
	}
	else
	{
		cout << "Game over, you lose all your money"<< endl;
	}
	system("pause");
	return 0;
}

bool tryToMakePoint(int point)
{
	while (true)
	{
		int total = rollTwoDice();
		if (total == point) return true;
		if (total == 7) return false;
	}
}

int rollTwoDice()
{
	cout << "Rolling the dice...." << endl;
	int d1 = randomInteger(1, 6);
	int d2 = randomInteger(1, 6);
	int total = d1 + d2;
	cout << "You rolled " << d1 << " and " << d2 << " - that's " << total << endl;
	return total;
}
