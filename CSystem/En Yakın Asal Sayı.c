#include <stdio.h>
#include <conio.h>

int PrevPrime(int x)
{
	if (x < 4) return (x == 3 ? 2 : 0);
	
	int i, t = 0;
	
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			t = i = 1;
			x--;
		}
	}
	
	return (t ? x : PrevPrime(x - 1));
}

int closest_prime(int value)
{
	return (PrevPrime(value));
}

int main()
{
	int a;
	
	scanf("%d", &a);
	
	if (closest_prime(a))
	{
		printf("%d'dan kucuk en buyuk asal sayi %d'dir", a, closest_prime(a));
	}
	else
	{
		printf("%d'dan kucuk bir asal sayi yoktur.", a);
	}
	
	getch();
	return 0;
}
