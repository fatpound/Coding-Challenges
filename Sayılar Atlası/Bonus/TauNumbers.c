#include <stdio.h>
#include <conio.h>

/*
int IsTau(int n, int x, int count) // (n, 1, 0)
{
	return (x <= n ? (IsTau(n, x + 1, count + (!(n % x) ? 1 : 0))) : !(n % count));
}
*/

int IsTau(int n)
{
	int i, count = 0;
	
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	
	return (n % count == 0);
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsTau(n)) // Refactorable numbers
		{
			printf("%d\n", n);
		}
	}
	
	return (!getch());
}
