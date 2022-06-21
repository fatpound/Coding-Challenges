#include <stdio.h>
#include <conio.h>

#define SIZE 100

int j = 0;

int DigitCount(int x)
{
	return (x ? (1 + DigitCount(x / 10)) : 0);
}

char *helper(char *str, char *src)
{
	int i;
	
	for (i = 0; src[i]; i++)
	{
		str[j++] = src[i];
	}
	
	return (str);
}

char *numtotext(int number, char *str)
{
	int i, t = number, d[10] = { 0 };
	
	// j = 0;
	
	char *rakam[] = { "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz" };
	char *onluk[] = { "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan" };
	char *ozell[] = { "yuz", "bin", "milyon", "milyar" };
	
	for (i = 0; number; number /= 10)
	{
		d[i++] = number % 10;
	}
	
	for (i = 9; i > -1; i--)
	{
		if (d[i])
		{
			if (i == 9)
			{
				helper(str, rakam[d[i] - 1]);
				helper(str, ozell[3]);
			}
			else if (i > 5)
			{
				if (i == 8)
				{
					helper(str, (d[i] != 1 ? rakam[d[i] - 1] : ""));
					helper(str, ozell[0]);
				}
				else if (i == 7)
				{
					helper(str, onluk[d[i] - 1]);
				}
				else
				{
					helper(str, rakam[d[i] - 1]);
					helper(str, ozell[2]);
				}
			}
			else if (i > 2)
			{
				if (i == 5)
				{
					helper(str, (d[i] != 1 ? rakam[d[i] - 1] : ""));
					helper(str, ozell[0]);
				}
				else if (i == 4)
				{
					helper(str, onluk[d[i] - 1]);
				}
				else
				{
					helper(str, rakam[d[i] - 1]);
					helper(str, ozell[1]);
				}
			}
			else
			{
				if (i == 2)
				{
					helper(str, (d[i] != 1 ? rakam[d[i] - 1] : ""));
					helper(str, ozell[0]);
				}
				else if (i == 1)
				{
					helper(str, onluk[d[i] - 1]);
				}
				else
				{
					helper(str, rakam[d[i] - 1]);
				}
			}
		}
	}
	
	str[j] = 0;
	
	return (str);
}

int main()
{
	char str[SIZE];
	int x;
	
	scanf("%d", &x);
	
	printf("%s", numtotext(x, str)); // 1345417
	
	getch();
	return 0;
}
