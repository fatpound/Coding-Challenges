#include <stdio.h>
#include <conio.h>

int main()
{
	int i, bas, son, tempbas, tempson, enuzun = 0, fark;
	char d[101];
	
	printf("lutfen bir cumle giriniz : ");
	gets(d);
	
	printf("\n");
	
	for (i = 0; d[i] ;i++)
	{
		if ((d[i - 1] == ' ' || i == 0) && d[i] != ' ' && d[i + 1] != ' ')
		{
			bas = i;
		}
		
		if (d[i - 1] != ' ' && d[i] != ' ' && (d[i + 1] == ' ' || d[i + 1]))
		{
			fark = i - bas + 1; // kelime uzunlugu
			
			if (enuzun < fark)
			{
				tempbas = bas;
				tempson = i;
				enuzun = fark;
			}
		}
	}
	
	printf("cumledeki en uzun kelime = ");
	
	for (i = tempbas; i <= tempson; i++)
	{
		printf("%c", d[i]);
	}
	
	printf("\nen uzun kelime %d harften olusmaktadir", enuzun);
	
	getch();
	return 0;
}
