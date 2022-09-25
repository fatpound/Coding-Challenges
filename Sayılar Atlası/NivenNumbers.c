#include <stdio.h>
#include <conio.h>

int DigitSum(int value)
{
	return (value > 0 ? (value % 10 + DigitSum(value / 10)) : 0);
}

int IsNiven(int n)
{
	return (n % DigitSum(n) == 0);
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsNiven(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
