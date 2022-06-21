#include <stdio.h>
#include <conio.h>

#define SIZE 200

int index;

int mystrstr(char *s1, char *s2)
{
	int i, j, uz, sayac = 0, flag;
	
	for (uz = 0; s2[uz]; uz++);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[0])
		{
			for (j = i + 1, sayac = 1, flag = 0; sayac < uz; j++, sayac++)
			{
				if (s1[j] != s2[sayac])
				{
					flag = 1;
					break;
				}
			}
			
			if (!flag)
			{
				index = i;
				return 1; 
			}
		}
	}
	
	return 0;
}

int isvalid_rom(/*const*/ char *str)
{
	int i, j, temp, uz, flag, repeated;
	char *harf   = { "MDCLXVI\0" };
	char *word[] = { "CD", "MCM", "IV", "IX", "XL", "XC", "XI" }; // Uyumlu
	char *nota[] = { "IIII", "XXXX", "CCCC", "VV", "LL", "DD", "DM", "CMM" }; // Uyumsuz
	
	for (i = 0; str[i]; i++) // Uyumsuz harf kontrolu
	{
		for (j = 0, flag = 1; harf[j]; j++)
		{
			if (toupper(str[i]) == harf[j])
			{
				flag = 0;
				break;
			}
		}
		
		if (flag)
		{
			return 0;
		}
	}
	
	for (j = 0; j < 8; j++) // Uyumsuz kelime kontrolu
	{
		if (mystrstr(str, nota[j]))
		{
			return 0;
		}
	}
	
	for (i = 0; str[i]; i++) // Tekrar eden harf kontolu ve ardindan ozel karakter kontrolu
	{
		for (j = i + 1, repeated = 0; harf[j]; j++)
		{
			if (str[i] != str[j])
			{
				repeated = 1;
				break;
			}
		}
		
		if (repeated)
		{
			for (j = 0, flag = 1; j < 6; j++)
			{
				if (mystrstr(str, word[j]))
				{
					flag = 0;
					break;
				}
			}
			
			if (flag)
			{
				return 0;
			}
		}
	}
	
	for (i = index + 2; str[i]; i++) // Buyuk sayilar basta mi kontrolu  (duzelt)
	{
		for (j = 0; j < 6; j++)
		{
			if (str[i] == word[j][1]) 
			{
				return 0;
			}
		}
	}
	
	return 1;
}

int main()
{
	char temp[SIZE];
	char *w = temp;
	
	printf("lutfen bir yazi giriniz > ");
	gets(w);
	
	printf("%d", isvalid_rom(w));
	
	getch();
	return 0;
}
