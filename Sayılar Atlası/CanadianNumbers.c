#include <stdio.h>
#include <conio.h>

int DigitSquareSum(int value)
{
	return (value > 0 ? ((value % 10) * (value % 10) + DigitSquareSum(value / 10)) : 0);
}

int IsCanadian(int n)
{
	int i, sum = 0;
	
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	return (DigitSquareSum(n) == sum);
}

int main()
{
	int n;
	
	for (n = 1; n < 20000; n++)
	{
		if (IsCanadian(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
