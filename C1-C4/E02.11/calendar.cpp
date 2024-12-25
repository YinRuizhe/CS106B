#include "calendar.h"
#include <iostream>
using namespace std;


int daysInMonth(Month month,int year)
{
	switch (month)
	{
	case JANUARY:
		return 31;
	case FEBRUARY:
		if (isLeapYear(year))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	case MARCH:
		return 31;
	case APRIL:
		return 30;
	case MAY:
		return 31;
	case JUNE:
		return 30;
	case JULY:
		return 31;
	case AUGUST:
		return 31;
	case SEPTEMBER:
		return 30;
	case OCTOBER:
		return 31;
	case NOVEMBER:
		return 30;
	case DECEMBER:
		return 31;
	default:
		break;
	}
    return 0;
}

bool isLeapYear(int year)
{
	if (year%4==0 && year%100!=0)
	{
		return true;
	}
	if (year%100==0 && year%400==0)
	{
		return true;
	}
    return false;
}

string monthToString(Month month)
{
	switch (month)
	{
	case JANUARY:return "JANUARY";
	case FEBRUARY:return"FEBRUARY";
	case MARCH:return"MARCH";
	case APRIL:return"APRIL";
	case MAY:return"MAY";
	case JUNE:return"JUNE";
	case JULY:return"JULY";
	case AUGUST:return"AUGUST";
	case SEPTEMBER:return"SEPTEMBER";
	case OCTOBER:return"OCTOBER";
	case NOVEMBER:return"NOVEMBER";
	case DECEMBER:return"DECEMBER";
	default:
		break;
	}
}
