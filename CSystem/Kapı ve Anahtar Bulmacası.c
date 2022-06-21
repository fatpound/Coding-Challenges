#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 0, j, d[100] = { 0 };
	
	for (i = 1; i < 21; i++)
	{
		for (j = 1; j < 101; j++)
		{
			if (j % i == 0)
			{
				if (d[j - 1]) d[j - 1] = 0;
				else d[j - 1] = 1;
			}
		}
	}
	
	for (i = 0; i < 100; i++)
	{
		printf("%d ", d[i]);
	}
	
	printf("\n\n");
	
	for (i = 0; i < 100; i++)
	{
		if (d[i]) printf("%d ", i + 1);
	}
	
	printf("\n");
	
	for (i = 0; i < 100; i++)
	{
		if (d[i] == 0) printf("%d ", i + 1);
	}
	
	getch();
	return 0;
}
