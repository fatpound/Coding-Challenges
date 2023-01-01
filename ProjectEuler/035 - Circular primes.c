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
	// global bir dizi ve saya� olu�turup zaten onaylanm�� asal say�lar� depolay�p tekrar tekrar kontrol edilmesini engelleyebiliriz fakat gerek yok ��nk� ��z�m�m�z zaten �ok k�sa s�r�yor
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
		
		// en sondaki SWAP d�ng�s�n� silip, ikinci for d�ng�s�nde d[j] yerine d[(i + j) % 3] de koyabiliriz
		
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
	int n, count = 1; // d�ng�y� n = 2 diye ba�lat�caksak, n += (n == 2 ? 1 : 2) yazmal�y�z ama gerek yok
	
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
