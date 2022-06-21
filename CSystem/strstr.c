#include <stdio.h>
#include <conio.h>

char *mystrstr(/*const*/char *s1, const char *s2)
{
	int i, j, uz, sayac = 0, flag;
	char *adress = 0;
	
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
				adress = &s1[i];
				break;
			}
		}
	}
	
	return (adress);
}

int main()
{
	char s1[] = " Iyi bir C programcisi olmak icin cok calismak gerekir!..";
	char s2[] = "cok";
	char *p = mystrstr(s1, s2);
	
	printf("%s", p);
	
	getch();
	return 0;
}
