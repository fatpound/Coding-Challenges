#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i;
	
	for (i = 5; i * i < n + 1; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int Primorial(int x)
{
	int i, prod = 2, count = 1;
	
	for (i = 3; count < x; i += 2)
	{
		if (IsPrime(i))
		{
			prod *= i;
			count++;
		}
	}
	
	return (prod);
}

int main()
{
	int x;
	
	for (x = 1; x < 8; x++)
	{
		printf("%d\n", Primorial(x));
	}
	
	getch();
	return 0;
}
