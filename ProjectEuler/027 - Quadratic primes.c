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

int main()
{
	int a, b, n, x, i = 0, j, d[2];
	
	for (a = -1000; a <= 1000; a++)
	{
		for (b = -1000; b <= 1000; b++)
		{
			for (j = 0, n = 0; IsPrime(n * n + a * n + b); j++, n++);
			
			if (i < j)
			{
				i = j;
				
				d[0] = a;
				d[1] = b;
			}
		}
	}
	
	printf("%d", d[0] * d[1]);
	
	getch();
	return 0;
}
