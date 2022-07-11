#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned int k;
	
	printf("lutfen bir sayi giriniz : ");
	scanf("%d", &k);
	
	printf("%u", k ^ 255);
	
	getch();
	return 0;
}
