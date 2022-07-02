#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void newBinary(int x)
{
	int c = 1, i, t, r1 = 0, r2 = 0, sonuc = 0;
	char dizi[9];
	
	for (i = 0; i < 8; i++)
	{
		dizi[i] = '0';
	}
	dizi[8] = '\0';
	
	int index = 7;
	while (x)
	{
		dizi[index] = (x & 1) | 48;
		x >>= 1;
		index--;
	}
	printf("\ngirdiginiz sayinin binary karsiligi = %s", dizi);
	
	while (r1 == r2)
	{
		r1 = rand() % 8;
		r2 = rand() % 8;
	}
	
	t = dizi[r1] ^ 48;
	dizi[r1] = dizi[r2];
	dizi[r2] = t | 48;
	
	for (i = 7; i > -1; i--) // binary diziden decimal sayi elde edilmesi
	{
		sonuc += (c * (dizi[i] ^ 48));
		c *= 2;
	}
	
	printf("\nyeni binary = %s\n", dizi);
	printf("yeni binarynin decimal hali = %d", sonuc);
}

// Special thanks to Weylyn...
int main()
{
	int x;
	srand(time(NULL));
	
	printf("sayinizi giriniz: ");
	scanf("%d", &x);
	
	newBinary(x);
	
	getch();
	return 0;
}
