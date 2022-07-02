#include <stdio.h>
#include <conio.h>

char k[100];

void YeniKelime(char harf)
{
	int i, flag;
	
	for (i = 0; i < k[i] != '\0'; i++)
	{
		if (k[i] == harf)
		{
			k[i]=' ';
		}
	}
	
	while (1)
	{
		flag = 0;
		
		for (i = 0; i < k[i] != '\0'; i++)
		{
			if (k[i] == ' ' && k[i + 1] != ' ')
			{
				k[i] = k[i + 1];
				k[i + 1]= ' ';
				flag = 1;
			}
		}
		
		if (flag == 0) break;
	}
	
	printf("\nkelimenin yeni hali = %s", k);
}

int main()
{
	char harf;
	
	printf("lutfen bir kelime giriniz: ");
	gets(k);
	
	printf("silmek istediginiz harfi giriniz: ");
	harf = getch();
	
	printf("%c",harf);
	
	YeniKelime(harf);
	
	getch();
	return 0;
}
