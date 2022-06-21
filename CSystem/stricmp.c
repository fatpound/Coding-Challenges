#include <stdio.h>
#include <conio.h>

int mystricmp(/*const*/char *s1, /*const*/char *s2)
{
	int i, j;
	
	for (i = 0; s1[i] || s2[j]; i++, j++)
	{
		if (!s1[i] || !s2[j])
		{
			(s1[i] ? j-- : i--);
		}
	}
	
	return (i != j ? ((i > j) ? 1 : -1) : 0);
}

int main()
{
	char s1[100], s2[100];
	int result;
	
	printf("birinci yaziyi giriniz : ");
	gets(s1);
	printf("ikinci yaziyi giriniz : ");
	gets(s2);
	
	result = mystricmp(s1, s2);
	
	printf("(%s) %s (%s)", s1, result ? ((result > 0) ? ">" : "<")  : "==", s2);
	
	getch();
	return 0;
}
