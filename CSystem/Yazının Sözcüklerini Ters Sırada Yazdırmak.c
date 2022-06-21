#include <stdio.h>
#include <conio.h>

int main()
{
	int i, sayac = 0, b[9], s[9];
	char c[101];
	
	gets(c);
	
	printf("\n");
	
	for (i = 0; c[i]; i++, sayac++)
	{
		if (i == 0 || c[i - 1] == 32) b[sayac] = i;
		if (c[i + 1] == 32 || c[i + 1] == 0) s[sayac] = i;
	}
	
	for (i = b[sayac = 8]; i <= s[sayac]; i++)
	{
		printf("%c", c[i]);
		
		if (c[i + 1] == 32 || c[i + 1] == 0)
		{
			i = b[--sayac] - 1;
			printf(" ");
		}
	}
	
	getch();
	return 0;
}
