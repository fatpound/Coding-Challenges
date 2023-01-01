#include <stdio.h>
#include <conio.h>
#include <math.h>

int IsPentagonal(int n)
{
	double x = (sqrt(1 + 24 * n) + 1) / 6;
	
	return (x == ((int) x));
}

int main()
{
	int i = 1, j, n, m, flag = 1;
	
	while (flag)
	{
		i++;
		
		n = i * (3 * i - 1) / 2;
		
		for (j = i - 1; j > 0; j--)
		{
			m = j * (3 * j - 1) / 2;
			
			if (IsPentagonal(n - m) && IsPentagonal(n + m))
			{
				flag = 0;
				
				break;
			}
		}
	}
	
	printf("%d", n - m);
	
	getch();
	return 0;
}
