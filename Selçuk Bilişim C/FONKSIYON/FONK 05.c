#include <stdio.h>
#include <conio.h>

void BasHarfiBuyut(char m[100])
{
	int i;
	
	if (m[0] != ' ')
	{
		m[0] -= 'a'-'A';
	}
	
	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] == ' ' && m[i + 1] != ' ')
		{
			if (m[i + 1] >= 'a' && m[i + 1] <= 'z')
			{
				m[i + 1] -= 'a' - 'A';
			}
		}
	}
	
	printf("\ngirdiginiz cumlenin yeni hali = %s", m);
}

int main()
{
	char yazi[100]; // metin
	
	printf("lutfen kucuk harflerle bir cumle giriniz : ");
	gets(yazi);
	
	BasHarfiBuyut(yazi);
	
	getch();
	return 0;
}
