#include <stdio.h>
#include <conio.h>

void KokDisi(int x)
{
	int i, k = 1;

	for (i = 2; i < x / 2; i++)
	{
		if (x % (i * i) == 0)
		{
			while (x % (i * i) == 0)
			{
				x /= i * i;
				k *= i;
			}
		}
	}

	printf("%i*karekok(%i)", k, x);
}

int main()
{
	int s;
	
	printf("lutfen koklu bir sayi giriniz : ");
	scanf("%d", &s);
	
	KokDisi(s);

	getch();
	return 0;
}
