#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int IsLeapYear(int y)
{
	return ((y % 4 == 0 && y % 100) || y % 400 == 0);
}

void print_random_date(void) // 01.01.1900 - 31.12.2000
{
	int m = rand() % 12 + 1, y = rand() % 101 + 1900;
	int d;
	
	if (m == 2)
	{
		d = rand() % (IsLeapYear(y) ? 29 : 28);
	}
	else if (m < 8)
	{
		d = rand() % (m % 2 ? 31 : 30);
	}
	
	if (m > 7)
	{
		d = rand() % (m % 2 ? 30 : 31);
	}
	
	d++;
	
	printf(m < 10 ? (d < 10 ? "0%d.0%d.%d" : "%d.0%d.%d") : (d < 10 ? "0%d.%d.%d" : "%d.%d.%d"), d, m, y);
}

int main()
{
	srand(time(NULL));
	
	print_random_date();
	
	getch();
	return 0;
}
