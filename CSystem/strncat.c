#include <stdio.h>
#include <conio.h>

#define SIZE 200

char *mystrncat(char *dest, /*const*/char *src, int n)
{
	int i, j = 0, uz, duz, sayac = 0;
	
	for (uz = 0; src[uz]; uz++);
	for (duz = 0; dest[duz]; duz++);
	for (i = duz; sayac < ((uz < n) ? uz : n); dest[i] = src[j++], i++, sayac++);
	
	dest[i] = 0;
	
	return (dest);
}

int main()
{
	char s1[SIZE], s2[SIZE];
	int i, n;
	
	printf("birinci yaziyi girin : ");
	gets(s1);
	printf("ikinci yaziyi girin : ");
	gets(s2);
	
	printf("birinci yazinin sonuna kac karakter eklemek istiyorsunuz? : ");
	scanf("%d", &n);
	
	for (i = 0; i < 2; i++)
	{
		if (i)
		{
			mystrncat(s1, s2, n);
		}
		
		printf("eklemeden %s = (%s)%s", i ? "sonra" : "once ", s1, i ? "" : "\n");
	}
	
	getch();
	return 0;
}
