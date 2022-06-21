#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (*x == *y ? *x = *y : (*x ^= *y ^= *x ^= *y))
#define SIZE 100

char *rem_space(char *str)
{
	int i, j, sayac = 0;
	
	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			sayac++;
		}
	}
	
	for (i = 0; str[i]; i++)
	{
		while (str[i + 1] == 32 && (sayac-- > 0))
		{
			for (j = i + 1; str[j + 1]; j++)
			{
				SWAP(&str[j], &str[j + 1]);
			}
		}
	}
	
	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			str[i] = 0;
			break;
		}
	}
	
	return (str);
}

int main()
{
	char s[SIZE];
	
	printf("bir yazi giriniz : ");
	
	gets(s);
	
	printf("yazinin yeni sekli = %s", rem_space(s));
	
	getch();
	return 0;
}
