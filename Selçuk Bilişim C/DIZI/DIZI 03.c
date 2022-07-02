#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	char k, y, m[100];
	
	printf("lutfen bir cumle giriniz : ");
	gets(m);
	
	printf("lutfen degistirmek istediginiz harfi giriniz : ");
	scanf("%c", &k);
	
	printf("lutfen hangi karakter ile degistirmek istediginizi giriniz : ");
	y = getch();
	
	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] != ' ' && m[i] == k)
		{
			m[i] = y;
		}
	}
	
	printf("%s", m);
	
	getch();
	return 0;
}
