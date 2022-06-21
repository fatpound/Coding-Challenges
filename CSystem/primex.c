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

int DigitSum(int n)
{
	return (n ? (n % 10) + DigitSum(n / 10) : 0);
}

int DigitCount(int n)
{
	return (n ? 1 + DigitCount(n / 10) : 0);
}

int IsPrimex(int x)
{
	if (IsPrime(x) == 0) return 0;
	
	if (IsPrime(x) && (DigitCount(x) != 1))
	{
		return (IsPrimex(DigitSum(x)));
	}
	
	return (DigitCount(x) == 1 && IsPrime(x) ? 1 : 0);
}

int main()
{
	int i;
	
	for (i = 2; i < 100000; i++)
	{
		if (i == 2) printf("2"); // Kod bitiminde yeni satýra geçmesin diye bunu yazdým
		else if (IsPrimex(i)) printf("\n%d", i);
	}
	
	getch();
	return 0;
}
