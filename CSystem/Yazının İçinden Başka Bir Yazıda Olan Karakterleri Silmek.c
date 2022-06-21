#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j;
	char c1[101], c2[101];
	
	gets(c1);
	gets(c2);
	
	for (i = 0; c2[i]; i++) 
	{
		for (j = 0; c1[j]; j++)
		{
			if (c1[j] == c2[i])
			{
				c1[j] = 32;
			}
		}
	}
	
	printf("%s", c1);
	
	getch();
	return 0;
}
