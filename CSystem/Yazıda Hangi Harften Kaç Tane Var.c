#include <stdio.h>
#include <conio.h>

int main()
{
	int i, dongu, sayac, temp[30] = {0};
	char dizi[101];
	
	printf("lutfen kucuk harflerle bir cumle giriniz > ");
	gets(dizi);
	
	for (dongu = 0; dongu < 30; dongu++)
	{
		sayac = 0;
		
		for (i = 0; dizi[i]; i++)
		{
			if ((dizi[i] == 'A' + dongu) || (dizi[i] == 'a' + dongu))
			{
				sayac++;
			}
		}
		
		if (sayac)
		{
			temp[dongu] = sayac;
		}
	}
	
	for (i = 0; i < 30; i++)
	{
		if (temp[i])
		{
			printf("\n%d tane %c var", temp[i], 'a' + i - 32);
		}
	}
	
	getch();
	return 0;
}
