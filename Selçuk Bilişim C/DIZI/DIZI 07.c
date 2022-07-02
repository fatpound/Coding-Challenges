#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, sayac, b, flag = 0, temp;
	char d[101], k[101];
	
	printf("lutfen bir cumle giriniz : ");
	gets(d);
	
	printf("cumlede aramak istediginiz kelimeyi giriniz : ");
	gets(k);
	
	for (b = 0; k[b] != '\0'; b++);
	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] == k[0] && b > 1)
		{
			temp = i;
			
			for (j = 0; j < b; j++, temp++)
			{
				if (d[temp] != k[j])
				{
					flag = 1;
					break;
				}
			}
			
			if (flag == 0 && (d[i + b] == ' ' || d[i + b] == '\0'))
			{
				sayac++;
			}
		}
	}

	if (sayac != 0) printf("cumlede gecen %s kelimesi %d kez tekrar ediyor", k, sayac);
	else if (b == 1) printf("aranacak kelime yerine harf girdiniz");
	else printf("aradiginiz kelime cumlede gecmemektedir");
	
	getch();
	return 0;
}
