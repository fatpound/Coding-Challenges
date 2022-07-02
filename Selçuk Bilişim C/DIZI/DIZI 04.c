#include <stdio.h>
#include <conio.h>

int main()
{
	int d = 0, i, boyut;
	char m[100];
	
	printf("lutfen bir sey yaziniz : ");
	gets(m);
	
	for (boyut = 0; m[boyut] != '\0'; boyut++);
	
	for (i = 0; i < boyut / 2; i++)
	{
		if (m[i] == m[boyut - 1 - i])
		{
			d++;
		}
	}
	
	if (d == boyut / 2) printf("yazdiginiz sey palindromdur");
	else printf("yazdiginiz sey ozel degildir");
	
	getch();
	return 0;
}
