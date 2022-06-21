#include <stdio.h>
#include <conio.h>

double power(double x, int n)
{
	return (n ? ((1 / x) * power(x, n + 1)) : 1);
}

int Fact(int x)
{
	return (x ? (Fact(x - 1) * x) : 1);
}

int main()
{
	double x = 0, y = 1;
	
	while (++x < 11)
	{
		y += power(Fact(x), -1);
	}
	
	printf("e = %g", y);
	
	getch();
	return 0;
}
