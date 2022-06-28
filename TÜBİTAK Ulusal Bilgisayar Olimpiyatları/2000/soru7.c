#include <stdio.h>
#include <conio.h>

int Factorial(int x)
{
	return (x ? (x * Factorial(x - 1)) : 1);
}

int main()
{
	// x  + 3y = 12
	// x  = 12 - 3y
	
	// 0 <= x <= 12
	// 0 <= y <= 4
	
	int x, y, sum = 0;
	
	for (y = 0; y <= 4; y++)
	{
		x = 12 - 3 * y;
		
		sum += (Factorial(x + y) / (Factorial(x) * Factorial(y)));
	}
	
	printf("%d", sum);
	
	getch();
	return 0;
}
