#include <stdio.h>
#include <conio.h>

int isPrime(int x)
{
	int i;
	
	if (x < 2) return 0;
	
	for (i = 2; i <= (x >> 1); i++) if (x % i == 0) return 0;
	
	return 1;
}

int DigitSum(int n)
{
	return (n ? (n % 10) + DigitSum(n / 10) : 0);
}

int DigitCount(int n)
{
	return (n ? 1 + DigitCount(n / 10) : 0);
}

int SumOfPrimeDivDigits(int x)
{
	int i, sop = 0;
	
	for (i = 2; i <=x; i++)
	{
		if (isPrime(i))
		{
			while (x % i == 0)
			{
				sop += (DigitCount(i) != 1 ? DigitSum(i) : i);
				x /= i;
			}
		}
	}
	
	return (sop);
}

int isSmith(int x)
{
	return (DigitSum(x) == SumOfPrimeDivDigits(x) ? 1 : 0);
}

int main()
{
	int i;
	
	for (i = 2; i < 10001; i++)
	{
		if (isPrime(i)) continue;
		else if (i == 4) printf("4"); // Program sonunda boþuna yeni satýra geçilmesin diye bunu koydum
		else if (isSmith(i)) printf("\n%d", i);
	}
	
	getch();
	return 0;
}

