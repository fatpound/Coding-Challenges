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

int IsCubegiving(int n)
{
	return (((n * n * n) % Power(10, DigitCount(n))) == n);
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsCubegiving(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
