#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, sum, sumall = 0, factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	
	for (i = 10; i <= factorial[9] * 10; i++)
	{
		for (sum = 0, n = i; n; n /= 10)
		{
			sum += factorial[n % 10];
		}
		
		if (sum == i)
		{
			sumall += i;
		}
	}
	
	printf("%d", sumall);
	
	return (!getch());
}
