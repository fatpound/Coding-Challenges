#include <stdio.h>
#include <conio.h>

int Sigma(int n)
{
	int i, sum = 0;
	
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	
	return (sum);
}

int IsMajestical(int n)
{
	return ((Sigma(n) - n - 1) ? ((n - 1) % (Sigma(n) - n - 1) == 0) : 0);
}

int main()
{
	int n;
	
	for (n = 6; n < 1000,0; n++)
	{
		if (IsMajestical(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
