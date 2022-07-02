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
		
		// Bölen böldüğü sürece devam çünkü 1'den büyük asal olmayan her doğal sayı asal çarpanlarının çarpımıdır
		while (n % i == 0)
		{
			n /= i;
			c++;
		}
		
		i++;
		p *= c;
	}
	
	// n, geldiği gibi gidiyorsa veya n, asal sayı olarak kaldıysa p'yi ikiye katla (n == x || ~-n) (x sayısı pozitif varsayılacaktır)
	return (p * ((n == x || n > 1) ? 2 : 1));
}

U64 Euler12(U64 int n)
{
	U64 int x = 1, tri = 1;
	
	while (DivCount(x) <= n)
	{
		x += ++tri;
	}
	
	return (x);
}

int main()
{
	printf("%llu", Euler12(500ULL));
	
	getch();
	return 0;
}
