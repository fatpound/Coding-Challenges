#include <stdio.h>
#include <conio.h>

int DigitCount(int n)
{
	return (n > 0 ? (1 + DigitCount(n / 10)) : 0);
}

int Factorial(int x)
{
	return (x ? x * Factorial(x - 1) : 1);
}

int Combination(int x, int y)
{
	return (Factorial(x) / (Factorial(y) * Factorial(x - y)));
}

int main()
{
	int a, b, c, i, n;
	
	printf("pascal ucgeni kac satir olsun? : ");
	scanf("%d", &n);
	
	for (printf("\n"), a = 0; a < n; a++)
	{
		c = 1;
		
		for (i = (n - a) * 2; i >= 0; i--, printf(" "));
		
		for (b = 0; b <= a; b++)
		{
			char w[] = { '%', DigitCount(Combination(n, n / 2)) + 48, 'd', ' ', '\0' };
			
			printf(w, c);
			
			c = c * (a - b) / (b + 1);
		}
		
		if (a != n - 1) printf("\n");
	}
	
	getch();
	return 0;
}
