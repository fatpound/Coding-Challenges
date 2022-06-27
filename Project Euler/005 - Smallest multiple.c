#include <stdio.h>
#include <conio.h>
#include <math.h>

int bolen = 21;

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
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

int PrevNPrime(int x)
{
	if (x == 3)
	{
		return 2;
	}
	
	if (IsPrime(x))
	{
		return x;
	}
	
	int i, t = 0;
	
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			t = i = 1;
			x--;
		}
	}
	
	return (t ? x : PrevNPrime(--x));
}

int Power(int x, int n)
{
	return (n > 1 ? (Power(x, n - 1) * x) : 1);
}

int main()
{
	int j, i = PrevNPrime((int) sqrt(bolen)), x = 2, p = 3;
	
	while (p < bolen)
	{
		if (IsPrime(p))
		{
			x *= p;
		}
		
		p++;
	}
	
	while (1)
	{
		for (j = 2; Power(i, j) < bolen; j++);
		
		x *= Power(i, j - 2);
		
		if (i == 2)
		{
			break;
		}
		
		i = PrevNPrime(i);
	}
	
	printf("%d", x);
	
	getch();
	return 0;
}
