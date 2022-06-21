#include <stdio.h>
#include <conio.h>

char *change_case(char *str)
{
	int i;
	
	for (i = 0; str[i]; i++)
	{
		str[i] -= ((str[i] > 64 && str[i] < 91) ? -32 : ((str[i] > 96 && str[i] < 123) ? 32 : 0));
	}
	
	return (str);
}

int main()
{
	char atalay[31];
	char *w = atalay;
	
	gets(w);
	
	printf("\n%s", change_case(w));
	
	getch();
	return 0;
}
