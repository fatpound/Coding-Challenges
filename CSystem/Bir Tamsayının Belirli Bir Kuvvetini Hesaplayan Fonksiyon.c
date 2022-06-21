#include <stdio.h>
#include <conio.h>

int power(unsigned int base, unsigned int exp)
{
	return (exp ? (base * power(base, exp - 1)) : 1);
}

int main()
{
	unsigned int k, base, exp;
	
	for (k = 0; k < 10; ++k)
	{
		printf("taban ve exp degerlerini giriniz : ");
		scanf("%u%u", &base, &exp);
		
		printf("%u sayisinin %u. kuvveti = %d\n", base, exp, power(base, exp));
	}
	
	getch();
	return 0;
}
