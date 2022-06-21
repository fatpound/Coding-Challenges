#include <stdio.h>
#include <conio.h>

#define SIZE 100

int mystrncmp(/*const*/char *s1, /*const*/char *s2, int n)
{
	int i, sum1 = 0, sum2 = 0;
	
	for (i = 0; i < n; sum1 += s1[i], sum2 += s2[i], i++);
	
	return ((sum1 != sum2) ? ((sum1 > sum2) ? 1 : -1) : 0);
}

int main()
{
	char s1[SIZE], s2[SIZE];
	int n, comp_result;
	
	printf("birinci yaziyi giriniz : ");
	gets(s1);
	printf("ikinci yaziyi giriniz : ");
	gets(s2);
	
	printf("ilk kac harf: ");
	scanf("%d", &n);
	
	comp_result = mystrncmp(s1, s2, n);
	
	printf("(%s) %s (%s)", s1, comp_result ? ((comp_result > 0) ? ">" : "<")  : "==", s2);
	
	getch();
	return 0;
}
