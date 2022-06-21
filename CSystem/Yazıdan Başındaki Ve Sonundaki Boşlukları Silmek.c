#include <stdio.h>
#include <conio.h>

#define SIZE 128

char *trim(char *dest, const char *source)
{
	int i, j, k, sayac1 = 0, sayac2 = 0;
	
	if (source[0] == 32)
	{
		for (i = 0; source[i]; i++)
		{
			if (source[i] == 32)
			{
				sayac1++;
			}
			else break;
		}
		
		for (i = 0; source[i]; i++);
		
		if (source[i - 1] == 32)
		{
			for (j = i - 1 ; j > 0; j--)
			{
				if (source[j] == 32)
				{
					sayac2++;
				}
				else break;
			}
		}
		
		for (j = 0, k = sayac1; k < (i - sayac2); k++, j++)
		{
			dest[j] = source[k];
		}
	}
	
	return (dest);
}

int main()
{
	char d[128], s[] = "    Iyi bir C programcisi olmak icin cok calismak gerekir      ";
	
	trim(d, s);
	printf("Elde edilen yazi: (%s)", d);
	
	getch();
	return 0;
}
