#include <stdio.h>
#include <conio.h>

char *mystrset(char *str, int c)
{
	int i;
	
	for (i = 0; str[i]; str[i++] = c);
	
	return (str);
}

int main()
{
	char str[] = "msi";
	
	printf("(%s)\n", mystrset(str, 'X'));
	
	getch();
	return 0;
}
