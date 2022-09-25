#include <stdio.h>
#include <conio.h>

int IsArithmetic(int n)
{
	int i, sum = 0, count = 0;
	
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
			count++;
		}
	}
	
	return (sum % count == 0);
}

int main()
{
	int n;
	
	for (n = 2; n < 1000; n += 2)
	{
		printf("%d\n", n - 1);
		
		if (IsArithmetic(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
