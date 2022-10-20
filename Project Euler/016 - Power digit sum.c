#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j, prod, count, sum = 0, eldevar;
	char *p = NULL;
	
	for (count = (int)floor(1000 * log10(2) + 1), p = (char*) malloc(sizeof(char) * (count + 1)), i = 0; i < count; p[i++] = '0');
	for (p[i] = 0, p[i - 1] = '2', i = 2; i <= 1000; i++)
	{
		for (eldevar = 0, j = count - 1; j >= 0; j--)
		{
			prod = (p[j] - 48) * 2 + eldevar;
			p[j] = (prod % 10) + 48;
			eldevar = prod / 10;
		}
	}
	
	// printf("%s", p); // 2**1000
	
	for (i = 0; i < count; i++)
	{
		sum += (p[i] - 48);
	}
	
	printf("%d", sum);
	
	return (!getch());
}
