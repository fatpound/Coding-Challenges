#include <stdio.h>
#include <conio.h>

int get_max3(int x, int y, int z)
{
	return ((x > y) ? (y > z ? x : ((x > z) ? x : z)) : ((x > z) ? y : ((y > z) ? y : z)));
}

int main()
{
	int s1, s2, s3;
	
	printf("uc sayi giriniz : ");
	scanf("%d%d%d", &s1, &s2, &s3);
	
	printf("\n%d %d %d icin max = %d", s1, s2, s3, get_max3(s1, s2, s3));
	
	getch();
	return 0;
}
