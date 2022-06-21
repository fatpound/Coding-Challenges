#include <stdio.h>
#include <conio.h>

int is_leap(int y)
{
	return ((y % 4 == 0 && y % 100) || y % 400 == 0);
}

int day_of_year(int day, int mon, int year)
{
	if (day == 0 || mon == 0 || mon > 12 || day > (mon < 8 ? (mon == 2 ? (is_leap(year) ? 29 : 28) : (mon % 2 ? 31 : 30)) : (mon % 2 ? 30 : 31)) || year < 1)
	{
		return -1;
	}
	
	int i, gun = 0;
	
	for (i = 1; i < mon; i++)
	{
		gun += (i < 8 ? (i == 2 ? (is_leap(year) ? 29 : 28) : (i % 2 ? 31 : 30)) : (i % 2 ? 30 : 31));
	}
	
	return (gun += day);
}

int main()
{
	int d, m, y;
	
	printf("gun ay ve yil degerlerini giriniz:\n\n");
	scanf("%d%d%d", &d, &m, &y);
	
	printf("%02d / %02d / %02d tarihi %d yilinin %d. gunudur", d, m, y, y, day_of_year(d, m, y));
	
	getch();
	return 0;
}
