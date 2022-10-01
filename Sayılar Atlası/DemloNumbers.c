#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int Power(U64 int x, U64 int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int main()
{
	U64 int n;
	
	for (n = 1; n < 10; n++)
	{
		printf("%llu\n", (Power(10, n) - 1) * (Power(10, n) - 1) / 81);
	}
	
	getch();
	return 0;
}
