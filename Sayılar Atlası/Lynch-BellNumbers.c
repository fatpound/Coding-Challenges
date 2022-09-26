#include <stdio.h>
#include <conio.h>

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int AllDigitsDiffer(int x)
{
	int i, j, count = DigitCount(x);
	int d[count];
	
	for (i = count - 1; i >= 0; i--, x /= 10)
	{
		d[i] = x % 10;
	}
	
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (d[i] == d[j])
			{
				return 0;
			}
		}
	}
	
	return 1;
}

int IsLynchBell(int n)
{
	if (!AllDigitsDiffer(n) || n % 10 == 0) return 0;
	
	int i, j = DigitCount(n), k = n;
	
	while (n > 0)
	{
		if (!(n % 10) || k % (n % 10))
		{
			return 0;
		}
		
		n /= 10;
	}
	
	return 1;
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsLynchBell(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
