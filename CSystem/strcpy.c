#include <stdio.h>
#include <conio.h>

#define SIZE 200

char *mystrcpy(char *dest, const char *source)
{
	int i;
	
	for (i = 0; source[i]; i++)
	{
		dest[i] = source[i];
	}
	
	return (dest);
}

int main()
{
	char s1[SIZE], s2[SIZE] = { 0 };
	
	printf("bir yazi girniz : ");
	gets(s1);
	
	mystrcpy(s2, s1);
	printf("kopyalanan yazi = %s!", s2);
	
	getch();
	return 0;
}
