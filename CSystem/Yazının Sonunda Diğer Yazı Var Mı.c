#include <stdio.h>
#include <conio.h>

#define SIZE 100
 
int strend(const char *s1, const char *s2)
{
	int i, j, uz1, uz2, sayac = 0;
	
	for (uz1 = 0; s1[uz1]; uz1++);
	for (uz2 = 0; s2[uz2]; uz2++);
	
	for (i = uz1 - 1, j = uz2 - 1; sayac < uz2; i--, j--, sayac++)
	{
		if (s1[i] != s2[j])
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	char s1[SIZE], s2[SIZE];
	
	printf("kaynak yaziyi giriniz : ");
	gets(s1);
	printf("kaynak yazinin sonunda aranacak yaziyi giriniz : ");
	gets(s2);
	
	printf("\n(%s) yazisinin sonunda (%s) yazisi %s!", s1, s2, strend(s1, s2) ? "var" : "yok");
	
	getch();
	return 0;
}
