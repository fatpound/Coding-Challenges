#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define M(x) ((i / x) % 10 + 48)

void mystrcat(char *dest, char *w)
{
	int i = 0, j = 0, uz, duz, sayac = 0;
	
	for (uz = 0; w[uz]; uz++);
	for (duz = 0; dest[duz]; duz++);
	for (i = duz; sayac < uz; dest[i] = w[j++], i++, sayac++);
	
	dest[i] = 0;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Too %s parameters!", argc < 2 ? "few" : "many");
		
		getch();
		exit(1);
	}
	
	int i, j, k;
	char src_name[10] = { 0 }, dest_name[10] = { 0 };
	
	for (i = 0; argv[1][i] != '.'; src_name[i] = argv[1][i], dest_name[i] = argv[1][i], i++); // ARGVnin eklenmesi
	
	mystrcat(src_name, "0000.ppp");
	mystrcat(dest_name, ".exe");
	
	FILE *src, *dest = fopen(dest_name, "wb");
	
	if (!dest)
	{
		printf("Target file cannot be created!");
	}
	
	for (i = 1; src = fopen(src_name, "rb"); i++)
	{
		while ((k = fgetc(src)) != EOF)
		{
			fprintf(dest, "%c", k);
		}
		
		fclose(src);
		
		remove(src_name);
		
		for (j = 0; argv[1][j] != '.'; src_name[j] = argv[1][j], j++);
		src_name[j] = 0;
		
		char w[] = { M(1000), M(100), M(10), M(1), '.', 'p', 'p', 'p', 0 };
		mystrcat(src_name, w);
	}
	
	if (!src)
	{
		printf("Source files cannot be opened!");
	}
	
	return 0;
}
