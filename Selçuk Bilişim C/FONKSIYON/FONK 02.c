#include <stdio.h>
#include <conio.h>

int y, z = 1;

int TabanAritmetigi(int x)
{
	if (x > 0) return (TabanAritmetigi(x / 10) * z + (x % 10));
	
	z *= y;
	
	return 0;
}

int main()
{
	int x;
	
	printf("lutfen bir sayi giriniz : ");
	scanf("%d", &x);
	
	printf("girdiginiz sayi hangi tabana gore hesaplansin? : ");
	scanf("%d", &y);
	
	printf("\nsonuc = %d", TabanAritmetigi(x));
	
	getch();
	return 0;
}
