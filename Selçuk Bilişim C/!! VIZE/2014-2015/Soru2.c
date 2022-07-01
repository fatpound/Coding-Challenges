#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	char c[101];
	
	printf("lutfen bir cumle giriniz: ");
	gets(c);
	
	for (i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] += 'a' - 'A';
			}
		}
		else
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 'a' - 'A';
			}
		}
	}
	
	printf("\ngirdiginiz cumlenin yeni hali = %s",c);
	
	getch();
	return 0;
}
