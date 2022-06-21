#include <stdio.h>
#include <conio.h>

int main()
{
	char s[100];
	int i, k;
	
	printf("bir yazi giriniz : ");
	gets(s);
	
	printf("\n");
	
	for (i = 0; s[i]; i++)
	{
		for (k = 0; k < i + 1; k++)
		{
			printf("%c", s[k]);
		}
		
		printf(s[i + 1] ? "\n" : "");
	}
	
	getch();
	return 0;
}
