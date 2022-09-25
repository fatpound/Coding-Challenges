#include <stdio.h>
#include <conio.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int IsNaked(int n)
{
	if (n % 10 == 0) return 0;
	
	int k = n;
	
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
		if (IsNaked(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
