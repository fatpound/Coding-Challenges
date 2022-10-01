#include <stdio.h>
#include <conio.h>

int DigitProd(int value)
{
	return (value > 0 ? ((value % 10) * DigitProd(value / 10)) : 1);
}

int IsZuckerman(int n)
{
	return (DigitProd(n) ? (n % DigitProd(n) == 0) : 0);
}

int main()
{
	int n;
	
	for (n = 1; n < 10000; n++)
	{
		if (IsZuckerman(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
