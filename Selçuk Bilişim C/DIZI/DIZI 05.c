#include <stdio.h>
#include <conio.h>

int main()
{
	int i, sayac = 0, tekharf, isaret = 0, bas, son;
	char d[101];
	
	printf("lutfen bir cumle giriniz : ");
	gets(d);
	
	for (i = 1; d[i] != '\0'; i++)
	{
		if (d[i - 1] == ' ' && d[i] != ' ' && d[i + 1] == ' ')
		{
			tekharf++;
		}
		
		if (d[i - 1] != ' ' && d[i] != ' ' && (d[i + 1] == ' ' || d[i + 1] == '\0'))
		{
			sayac++;
		}
		else if (sayac > tekharf && d[i - 1] == ' ' && d[i] != ' ' && d[i + 1] == ' ')
		{
			isaret = 1;
			sayac--;
		}
	}
	
	if (isaret == 1)
	{
		sayac += 2;
	}
	
	printf("\ngirdiginiz cumledeki kelime sayisi = %d", sayac);
	printf("\n");
	
	for (i = 1; d[i] != '\0'; i++)
	{
		if (d[i - 1] == ' ' && d[i] != ' ' && d[i + 1] != ' ')
		{
			bas = i;
		}
		
		if (d[i - 1] != ' ' && d[i] != ' ' && (d[i + 1] == ' ' || d[i + 1] == '\0'))
		{
			for (son = i; bas <= son; bas++)
			{
				printf("%c", d[bas]);
			}
			
			if (d[i + 1] != '\0') printf("\n");
		}
	}
	
	getch();
	return 0;
}
