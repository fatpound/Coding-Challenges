#include <stdio.h>
#include <conio.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int main()
{
	int n, m, f, sum = 0;
	
	for (n = 10; n <= 59049 * 5; n++)
	{
		for (f = 0, m = n; m; f += Power(m % 10, 5), m /= 10);
		
		if (f == n)
		{
			sum += n;
		}
	}
	
	printf("%d", sum);
	
	return (!getch());
}
