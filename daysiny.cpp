

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