#include <stdio.h>
#include <conio.h>

int DigitCount(int value)
{
	if (value > 0) return (1 + DigitCount(value / 10));

	return 0;
}

int is_possible(int x, int y)
{
	int i, j, flag, a = DigitCount(x), b = DigitCount(y);
	int xd[a], yd[b];
	
	for (i = 0; i < a; i++, x /= 10)
	{
		xd[i] = x % 10;
	}
	
	for (i = 0; i < b; i++, y /= 10)
	{
		yd[i] = y % 10;
	}
	
	for (i = 0; i < b; i++)
	{
		flag = 0;
		
		for (j = 0; j < a; j++)
		{
			if (yd[i] == xd[j])
			{
				flag = 1;
			}
		}
		
		if (flag == 0) return 0;
	}
	
	return 1;
}

int main()
{
	printf("%d", is_possible(2735, 5273));
	
	getch();
	return 0;
}
