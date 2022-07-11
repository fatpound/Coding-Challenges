#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned int k;
	
	printf("lutfen bir sayi giriniz : ");
	scanf("%u", &k);
	
	printf("%u", k ^ 255);
	
	getch();
	return 0;
}
