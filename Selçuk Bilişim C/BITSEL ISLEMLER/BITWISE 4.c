#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned int x;
	
	printf("lutfen bir sayi giriniz: ");
	scanf("%u", &x);
	
	printf("%d\n", x ^ (4294967295 - 1));
	
	getch();
	return 0;
}