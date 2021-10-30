
#include <cassert>

bool IsLeapYear_New(int y)
{

	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);

}

int DaysInYear(int y)
{
	if (IsLeapYear_New(y))
	{
		return 366;
	}
	else
	{
		return 365;
	}


}

int DaysInYearRange(int y1, int y2)
{
	assert(y1 < y2);
	int result = 0;

	for (int i = y1; i <= y2; i++)
	{
		if (IsLeapYear_New(i))
		{
			result += 366;
		}
		else
		{
			result += 365;
		}

	}


}