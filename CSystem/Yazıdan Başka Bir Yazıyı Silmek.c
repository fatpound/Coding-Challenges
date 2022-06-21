#include <stdio.h>
#include <conio.h>

#define SIZE 128

char *remove_str(char *p1, const char *p2)
{
	int i, j, k, x, uz, flag, sayac;
	
	for (uz = 0; p2[uz]; uz++);
	
	for (i = 0; p1[i]; i++)
	{
		if (p1[i] == p2[0])
		{
			for (j = i + 1, k = 1, flag = 0, sayac = 0; sayac < uz - 1; j++, k++, sayac++)
			{
				if (p1[j] != p2[k])
				{
					flag = 1;
					break;
				}
			}
			
			// 01234567
			// sizmerh
			//  izmer
			
			if (!flag)
			{
				for (sayac = 0, x = i; sayac < uz; sayac++, x++)
				{
					p1[x] = 32;
				}
			}
			
			i = j - 1;
		}
	}
	
	return (p1);
}

int main()
{
	char s1[SIZE], s2[SIZE];
	
	printf("bir yazi girin: ");
	gets(s1);
	printf("silinecek yaziyi girin: ");
	gets(s2);
	printf("silme isleminden once : (%s)\n", s1);
	
	remove_str(s1, s2);
	
	printf("silme isleminden sonra : (%s)", s1);
	
	getch();
	return 0;
}
