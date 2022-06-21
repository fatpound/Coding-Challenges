#include <stdio.h>
#include <conio.h>

char *mystrrchr(/*const*/char *str, int c)
{
	int i;
	char *adress;
	
	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
		{
			adress = &str[i];
		}
	}
	
	return (adress);
}

int main()
{
	char string[] = "12345678901234567890123456789012345678901234567890";
	int ch;
	
	for (ch = '0'; ch < '9' + 1; ++ch)
	{
		printf("%s%s", mystrrchr(string, ch), ch != '9' ? "\n" : "");
	}
	
	getch();
	return 0;
}
