#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, s, gecici, sayac;
	char k, c[101];
	
	printf("lutfen bir cumle giriniz > ");
	gets(c);
	
	for (i = 0; c[i]; i++)
	{
		sayac = 1;
		
		for (j = i + 1; c[j]; j++)
		{
			if (c[i] == c[j])
			{
				sayac++;
			}
		}
		
		if (gecici < sayac)
		{
			gecici = sayac;
			s = sayac;
			k = c[i];
		}
	}
	
	printf("\ncumlede %d kez ve en cok tekrar eden harf veya sayi = %c",s,k);
	
	getch();
	return 0;
}