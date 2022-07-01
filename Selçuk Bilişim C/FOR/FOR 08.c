#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// soru eksik, kac tane sayi uretileceginden bahsedilmemis
// burada 100 elemanli bir dizi kullanilacaktir

int main()
{
	int c, t, i, d[100];
	
	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		d[i] = rand() % 200 + 151;
		
		if (d[i] % 2 == 0) c++;
		else t++;
	}
	
	for (i = 0; i < 100; i++)
	{
		printf("%d || ", d[i]);
	}
	
	printf("\n");
	
	printf("\nrastgele olusturulan sayilardan tek  olanlarin adedi = %d", t);
	printf("\nrastgele olusturulan sayilardan cift olanlarin adedi = %d", c);
	
	getch();
	return 0;
}