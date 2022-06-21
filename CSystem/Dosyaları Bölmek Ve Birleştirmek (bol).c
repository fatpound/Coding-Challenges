#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define M(x) ((i / x) % 10 + 48)

char *mystrcat(char *dest, char *w)
{
	int i = 0, j = 0, uz, duz, sayac = 0;
	
	for (uz = 0; w[uz]; uz++);
	for (duz = 0; dest[duz]; duz++);
	for (i = duz; sayac < uz; dest[i] = w[j++], i++, sayac++);
	
	dest[i] = 0;
	
	return (dest);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Too %s parameters!", argc < 3 ? "few" : "many");
		
		getch();
		exit(1);
	}
	
	FILE *src = fopen(argv[1], "rb");
	
	if (!src)
	{
		printf("Source file cannot be opened!");
		
		getch();
		exit(1);
	}
	
	int i, j, k, t = 4, cop, sayac, byte = 0, bol = atoi(argv[2]);
	
	for (i = 0; i < 3; i++)
	{
		if (argv[1][i + 1] == '.')
		{
			t = i + 1;
			break;
		}
	}
	
	for (byte = 0; (cop = fgetc(src)) != EOF; byte++);
	
	fseek(src, byte - 1, 0); // Son karakter yeni satir ise
	
	if ((cop = fgetc(src)) == '\n') // Onu yok et
	{
		byte -= 2;
	}
	
	rewind(src);
	
	for (i = 0; i < (byte % bol ? bol + 1 : bol); i++)
	{
		char dest[10] = { 0 };
		
		for (j = 0; j < t; j++)
		{
			dest[j] = argv[1][j];
		}
		
		char w[] = { M(1000), M(100), M(10), M(1), '\0' };
		
		mystrcat(dest, w);
		
		for (k = 0; dest[k]; k++);
		
		dest[k]     = '.';
		dest[k + 1] = 'p';
		dest[k + 2] = 'p';
		dest[k + 3] = 'p';
		dest[k + 4] =  0 ;
		
		FILE *fp = fopen(dest, "wb");
		
		sayac = 0;
		
		while (sayac++ != (i != bol ? byte / bol : byte % bol) && ((cop = fgetc(src)) != EOF))
		{
			fprintf(fp, "%c", cop);
		}
		
		fclose(fp);
	}
	
	return 0;
}
