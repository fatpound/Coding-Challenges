#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

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

/*
int IsAlreadyVerified(int n)
{
	// global bir dizi ve sayaç oluþturup zaten onaylanmýþ asal sayýlarý depolayýp tekrar tekrar kontrol edilmesini engelleyebiliriz fakat gerek yok çünkü çözümümüz zaten çok kýsa sürüyor
}
*/

int IsCircularPrime(int n)
{
	if (!IsPrime(n))
	{
		return 0;
	}
	
	int i, j, dc, on, num, *d = NULL;
	
	for (d = (int*) malloc(sizeof(int) * (dc = DigitCount(n))), i = dc - 1; i >= 0; i--)
	{
		d[i] = n % 10;
		n /= 10;
	}
	
	for (i = 0; i < dc; i++)
	{
		for (on = Power(10, dc - 1), num = j = 0; j < dc; j++)
		{
			num += d[j] * on;
			on /= 10;
		}
		
		// en sondaki SWAP döngüsünü silip, ikinci for döngüsünde d[j] yerine d[(i + j) % 3] de koyabiliriz
		
		if (!IsPrime(num))
		{
			free(d);
			return 0;
		}
		
		for (j = 0; j < dc - 1; SWAP(d[j], d[j + 1]), j++);
	}
	
	free(d);
	return 1;
}

int main()
{
	int n, count = 1; // döngüyü n = 2 diye baþlatýcaksak, n += (n == 2 ? 1 : 2) yazmalýyýz ama gerek yok
	
	for (n = 3; n < 1000000; n += 2)
	{
		if (IsCircularPrime(n))
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return (!getch());
}
