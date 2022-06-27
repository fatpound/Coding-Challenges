#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
	U64 int i, j = n + 1;
	
	for (i = 5; i * i < j; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

U64 int PrimeSum(U64 int x)
{
	U64 int i = 3, sum = 0;
	
	while (i < x)
	{
		if (IsPrime(i)) sum += i;
		i += 2;
	}
	
	return (sum + 2);
}

int main()
{
	printf("%llu", PrimeSum(2000000ULL));
		
	getch();
	return 0;
}
