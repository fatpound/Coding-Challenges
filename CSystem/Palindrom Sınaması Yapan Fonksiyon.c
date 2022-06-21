#include <stdio.h>
#include <conio.h>

#define SIZE 200

int is_pal(const char *str)
{
	int i, uz;
	
	for (uz = 0; str[uz]; uz++);
	for (i = 0; i < uz / 2; i++)
	{
		if (tolower(str[i]) != tolower(str[uz - i - 1]))
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	char str[SIZE];
	
	printf("bir yazi girin: ");
	gets(str);
	
	printf("palindrom%s!", is_pal(str) ? "" : " degil");
	
	getch();
	return 0;
}
