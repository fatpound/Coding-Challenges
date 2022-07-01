#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned int i, x, y = 0b00001111000011110000111100001111;
	
	printf("lutfen bir tamsayi giriniz > ");
	scanf("%u", &x);
	
	for (i = 1U << 31; i; i >>= 1)
	{
		printf(x & i ? "1" : "0");
	}
	
	printf("\n");
	
	y |= x;
	
	for (i = 1U << 31; i; i >>= 1)
	{
		printf(y & i ? "1" : "0");
	}
	
	getch();
	return 0;
}
