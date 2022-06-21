#include <stdio.h>
#include <conio.h>

int get_mid(int x, int y, int z)
{
	return ((x > y) ? (y > z ? y : ((x > z) ? z : x)) : ((x > z) ? x : ((y > z) ? z : y)));
}

int main()
{
	int x, y, z;
	
	printf("uc sayi giriniz : ");
	scanf("%d%d%d", &x, &y, &z);
	
	printf("\nortanca sayi = %d", get_mid(x, y, z));
	
	getch();
	return 0;
}
