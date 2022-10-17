#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int *d, count = 0;

int IsNew(int a)
{
	int i;
	
	for (i = 0; i < count; i++)
	{
		if (a == d[i])
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int a, b, c, p = 120, sol = 0, sols, max = 0, maxP;
	
	for (p = 120; p <= 1000; p++)
	{
		for (sols = 0, d = NULL, count = 0, a = 1; a < p / 2; a++)
		{
			if (IsNew(a))
			{
				for (sol = 0, b = 1; b < p / 2; b++)
				{
					for (c = p - a - b; a + b + c <= p; c++)
					{
						if (a * a + b * b == c * c)
						{
							d = (int*)(d ? realloc(d, sizeof(int) * (count + 2)) : malloc(sizeof(int) * (count + 2)));
							
							d[count++] = b;
							d[count++] = c;
							
							sols++;
						}
					}
				}
			}
		}
		
		if (sols > max)
		{
			max  = sols;
			maxP = p;
		}
	}
	
	printf("%d %d", maxP, max);
	
	return (!getch());
}
