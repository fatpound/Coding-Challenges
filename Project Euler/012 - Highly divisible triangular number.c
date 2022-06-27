#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int DivCount(U64 int x)
{
	U64 int n = x, i = 2, c, p = 1;
	
	if (x == 1) return (1ULL);
	
	while (i * i <= n)
	{
		c = 1;
		
		while (n % i == 0) // B�len b�ld��� s�rece devam ��nk� 1'den b�y�k asal olmayan her do�al say� asal �arpanlar�n�n �arp�m�d�r
		{
			n /= i;
			c++;
		}
		
		i++;
		p *= c;
	}
	
	if (n == x || n > 1) p *= 2; // n, geldi�i gibi gidiyorsa veya n, asal say� olarak kald�ysa p'yi ikiye katla (n == x || ~-n) (x say�s� pozitif varsay�lacakt�r)
	
	return (p);
}

U64 Euler12(U64 int n)
{
	U64 int x = 1, tri = 1;
	
	while (DivCount(x) <= n)
	{
		tri++;
		x += tri;
	}
	
	return (x);
}

int main()
{
	printf("%llu", Euler12(500ULL));
	
	getch();
	return 0;
}
