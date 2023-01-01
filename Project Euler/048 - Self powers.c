#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long 

int main()
{
	U64 int i, j, prod, sum = 0, mod = 10000000000;
	
	for (i = 1; i <= 1000; i++, sum += prod, sum %= mod)
	{
		for (prod = i, j = 1; j < i; j++, prod *= i, prod %= mod);
	}
	
	printf("%llu", sum);
	
	return (!getch());
}
