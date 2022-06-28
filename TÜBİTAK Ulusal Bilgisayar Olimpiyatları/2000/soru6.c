#include <stdio.h>
#include <conio.h>

int main()
{
	int i, sayac = 0;
	
	for (i = 1; i <= 1000; i++)
	{
		if (((i % 3) == 0) || ((i % 4) == 0) || ((i % 12) == 0))
		{
			sayac++;
		}
	}
	
	printf("%d", sayac);
	
	getch();
	return 0;
}
