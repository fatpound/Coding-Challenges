#include <stdio.h>
#include <conio.h>

int DigitSum(int value)
{
	return (value > 0 ? (value % 10 + DigitSum(value / 10)) : 0);
}

int IsDudeney(int n)
{
	return (DigitSum(n) * DigitSum(n) * DigitSum(n) == n);
}

int main()
{
	int n;
	
	for (n = 1; n < 20000; n++)
	{
		if (IsDudeney(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
