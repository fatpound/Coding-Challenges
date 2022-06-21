#include <stdio.h>
#include <conio.h>

int is_leap(int y)
{
	return ((y % 4 == 0 && y % 100) || y % 400 == 0);
}

int year_fd(int y) // Year's first date
{
	int i, date = 5;
		
	for (i = 1700; i < y; i++)
	{
		date += (is_leap(i)) ? 2 : 1;
		
		if (date > 6)
		{
			date %= 7;
		}
	}
	
	return (date);
}

int day_of_week(int day, int month, int year)
{
	if (day == 0 || month == 0 || month > 12 || day > (month < 8 ? (month == 2 ? (is_leap(year) ? 29 : 28) : (month % 2 ? 31 : 30)) : (month % 2 ? 30 : 31)) || year < 1700)
	{
		return -1;
	}
	
	int i, ay = 0, gun, yilbasi = year_fd(year);
	
	for (i = 1; i < month; i++)
	{
		ay += (i < 8 ? (i == 2 ? (is_leap(year) ? 29 : 28) : (i % 2 ? 31 : 30)) : (i % 2 ? 30 : 31)) % 7;
		
		ay %= 7;
	}
	
	gun = (yilbasi + ay) % 7;
	gun += (day - 1) % 7;
	gun %= 7;
	
	return (gun);
}

int main()
{
	printf("%d", day_of_week(11, 4, 2000));
	
	getch();
	return 0;
}
