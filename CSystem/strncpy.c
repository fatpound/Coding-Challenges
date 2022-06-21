#include <stdio.h>
#include <conio.h>

char *mystrncpy(char *dest, const char *str, int n)
{
	int i, uz;
	
	for (uz = 0; str[uz]; uz++);
	for (i = 0; i < ((n > uz - 1) ? uz : n); i++)
	{
		dest[i] = str[i];
	}
	
	if (n > uz - 1)
	{
		dest[i] = 0;
	}
	
	return (dest);
}

int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", dest[27];
	int k;
	
	for (k = 1; k < 11; ++k)
	{
		mystrncpy(dest, str, k);
		dest[k] = 0;
		
		printf("(%s)%s", dest, k != 10 ? "\n" : "");
	}
	
	getch();
	return 0;
}
