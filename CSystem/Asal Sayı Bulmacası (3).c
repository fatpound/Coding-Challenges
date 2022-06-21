#include <stdio.h>
#include <conio.h>

int d[4], d2[4];

int no_of_digits(int value)
{
	return (value ? (1 + no_of_digits(value / 10)) : 0);
}

int IsPrime(int x)
{
	if (x < 2) return 0;
	
	int i;
	
	for (i = 2; i * i < (x + 1); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int iscommon(int x)
{
	int i, j, k, t = x;
	
	for (i = 0; i < no_of_digits(x); d2[i++] = t % 10, t /= 10);
	for (i = 0; i < no_of_digits(x); i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (d2[i] == d[j])
			{
				break;
			}
		}
		
		if (j == 4) return 0;
		
		for (j = 0; j < no_of_digits(x); j++) // Ayni rakam kontrolu
		{
			for (k = j + 1; k < no_of_digits(x); k++)
			{
				if (d2[k] == d2[j])
				{
					return 0;
				}
			}
		}
	}
	
	return 1;
}

void print_primes(int value)
{
	int i, j, k, t = value;
	
	for (i = 0; i < 4; d[i++] = t % 10, t /= 10);
	for (i = 0; i < 10000; i++)
	{
		if (IsPrime(i) && iscommon(i))
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	print_primes(1729);
	
	getch();
	return 0;
}
