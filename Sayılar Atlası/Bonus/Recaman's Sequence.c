#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int count = 0, *d = NULL;

int IsNew(int n)
{
	int i;
	
	for (i = 0; i < count; i++)
	{
		if (d[i] == n)
		{
			return 0;
		}
	}
	
	return 1;
}

int R(int n)
{
	d = (int*) (count++ ? realloc(d, sizeof(int) * count) : malloc(sizeof(int)));
	
	return (d[count - 1] = count == 1 ? 0 : ((d[count - 2] - n) + ((d[count - 2] - n) > 0 && IsNew(d[count - 2] - n) ? 0 : (2 * n))));
}

int main()
{
	int n;
	
	for (n = 0; n < 100; n++)
	{
		printf("%d\n", R(n));
	}
	
	free(d);
	
	return (!getch());
}
