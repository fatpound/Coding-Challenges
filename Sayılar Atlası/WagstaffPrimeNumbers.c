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

int IsWagstaffPrime(int n)
{
	return (IsPrime(n) && IsPrime(((1 << n) + 1) / 3));
}

int main()
{
	int n;
	
	for (n = 3; n < 26; n += 2)
	{
		if (IsWagstaffPrime(n))
		{
			printf("%d\n", ((1 << n) + 1) / 3);
		}
	}
	
	getch();
	return 0;
}
