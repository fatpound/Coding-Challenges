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
	int n, prod;
	
	for (n = 144; 1; n++)
	{
		prod = 2 * n * n - n;
		
		if (IsPentagonal(prod))
		{
			printf("%d", prod);
			
			getch();
			return 0;
		}
	}
	
	return 0;
}
