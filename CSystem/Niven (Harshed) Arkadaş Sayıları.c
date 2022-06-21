#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i, j = n + 1;
	
	for (i = 5; i * i < j; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int DigitSum(int value)
{
	if (value > 0) return (value % 10 + DigitSum(value / 10));
	
	return 0;
}

int SumOfDivs(int x) // Çarpanlarý toplar
{
	int i, sod = 0;
	
	for (i = 1; i < x; i++)
	{
		if (x % i == 0) sod += i;
	}
	
	return (sod);
}

int are_friends(int x, int y) // Arkadaþ sayýlar
{
	return (SumOfDivs(x) == y && SumOfDivs(y) == x ? 1 : 0);
}

int main()
{
	int i, j;
	
	for (i = 1000; i < 7000; i++)
	{
		if (IsPrime(i)) continue;
		
		for (j = i; j < 7000; j++)
		{
			if (IsPrime(j)) continue;
			
			if (are_friends(i, j) && (i % DigitSum(i) == 0) && (j % DigitSum(j) == 0))
			{
				printf("%d - %d\n", i, j);
				i = j;
			}
		}
	}
	
	/*
	
	scanf("%d%d", &x, &y);
	
	for (i = 1000; i < x; i++)
	{
		if (!(IsPrime(i)))
		{
			for (j = i; j < y; j++)
			{
				if (!(IsPrime(j)))
				{
					if (are_friends(i, j) && (!(i % DigitSum(i))) && (!(j % DigitSum(j))))
					{
						printf("%d - %d", i, j);
						i = j;
					}
				}
			}
		}
	}
	
	*/
	
	getch();
	return 0;
}
