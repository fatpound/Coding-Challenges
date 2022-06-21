#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char hexharf[17] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };
FILE *fpp_d;

void ToHex(int n)
{
	if (n > 15)
	{
		ToHex(n / 16);
	}

	fprintf(fpp_d, "%c", hexharf[n % 16]);
}

int main(int argc, char *argv[])
{
	char w[81], y[81];
	
	if (argc != 2)
	{
		printf("Too %s parameters!\n\nType the filename > ", argc < 2 ? "few" : "many");
		
		gets(w);
	}
	else strcpy(w, argv[1]);
	
	int i, k;
	
	for (i = 0; w[i - 1] != '.'; i++)
	{
		y[i] = w[i];
	}
	
	y[i]     = 'h';
	y[i + 1] = 'e';
	y[i + 2] = 'x';
	y[i + 3] =  0 ;
	
	FILE *fp = fopen(w, "rb"), *fp_d = fopen (y, "wb");
	
	if (!fp || !fp_d)
	{
		printf("Could not create %s file%s!", !fp && !fp_d ? "" : (!fp ? "1st" : "2nd"), !fp && !fp_d ? "s" : "");
		
		if (fp)
		{
			fclose(fp);
		}
		
		getch();
		exit(1);
	}
	
	fpp_d = fp_d;
	i = 0;
	
	while ((k = fgetc(fp)) != EOF)
	{
		if (k < 16)
		{
			fprintf(fp_d, "0");
		}
		
		ToHex(k);
		
		fprintf(fpp_d, "%c", (++i % 16 == 0) ? 13 : 32);
	}
	
	return 0;
}
