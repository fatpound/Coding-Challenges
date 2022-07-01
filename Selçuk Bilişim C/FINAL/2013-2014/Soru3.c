#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned int x, y;

	// 0000000000000000
	// 00000 0000 0000000
	//  gun   ay    yil
	
	printf("lutfen gun bilgisini giriniz : ");
	scanf("%u", &y);
	
	x |= y << 11;
	
	printf("lutfen ay bilgisini giriniz : ");
	scanf("%u", &y);
	
	x |= y << 7;
	
	printf("lutfen yil bilgisini giriniz (2000 + ?) : ");
	scanf("%u", &y);
	
	x |= y;
	
	printf("\n%u-%u-%u", x >> 11, (x >> 7) & 15, 2000 + (x & 127));
		
	getch();
	return 0;
}