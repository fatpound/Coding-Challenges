#include <stdio.h>
#include <conio.h>

int main()
{
	int i, boyut;
	char t, k[80];
	
	printf("lutfen bir kelime giriniz :");
	gets(k);
	
	for (boyut = 0; k[boyut] != '\0'; boyut++);
	
	for (i = 0; i < boyut / 2; i++)
	{
		t = k[i];
		k[i] = k[boyut - 1 - i];
		k[boyut - 1 - i] = t;
	}
	
	printf("\nyazdiginiz kelimenin tersi = %s", k);
	
	for (i = 0; i < boyut; i++)
	{
		if (k[i] >= 'a' && k[i] <= 'z')
		{
			k[i] -= 'a' - 'A';
		}
	}
	
	printf("\nyazdiginiz kelimenin tersinin buyuk hali = %s", k);
	
	for (i = 0; i < boyut; i++)
	{
		if (k[i] >= 'A' && k[i] <= 'Z')
		{
			k[i] += 'a' - 'A';
		}
	}
	
	printf("\nyazdiginiz kelimenin tersinin kucuk hali = %s", k);
	
	getch();
	return 0;
}
