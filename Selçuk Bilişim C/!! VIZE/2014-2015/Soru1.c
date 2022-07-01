#include <stdio.h>
#include <conio.h>

int main()
{
	int i, d[50], sayac = 0;
	float toplam = 0;
	
	for (i = 0; i < 50; i++)
	{
		if (i == 0) printf("lutfen %d. sayiyi giriniz: ", i + 1);
		else printf("\nlutfen %d. sayiyi giriniz: ", i + 1);
		
		scanf("%d", &d[i]);
	}
	
	for (i = 0; i < 50; i++)
	{
		if (d[i] % 11 == 0 && d[i] != 0)
		{
			toplam += d[i];
			s	ayac++;
		}
	}
	
	if(sayac != 0) printf("girdiginiz sayilardan 11'e bolunebilenlerin aritmetik ortalamasi = %f", toplam / sayac);
	else printf("girdiginiz sayilardan hicbiri 11'in kati degildir");
	
	getch();
	return 0;
}
