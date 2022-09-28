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

int NthPrime(int n)
{
	if (n < 1) return 0;
	
	int i = 1, c = 0;
	
	while (++i)
	{
		if (IsPrime(i)) c++;
		if (c == n) break;
	}
	
	return (i);
}

int IsSuperPrime(int index)
{
	return (IsPrime(index) && IsPrime(NthPrime(index)));
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsSuperPrime(n))
		{
			printf("%d\n", NthPrime(n));
		}
	}
	
	getch();
	return 0;
}

