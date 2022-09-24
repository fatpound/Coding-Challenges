#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SWAP_P(x, y) (*(x) == *(y) ? *(x) = *(y) : (*(x) ^= *(y) ^= *(x) ^= *(y)))

void trim(char *dest, char *source)
{
	int i, j, k, sayac1 = 0, sayac2 = 0;
	
	if (source[0] == 32)
	{
		for (i = 0; source[i]; i++)
		{
			if (source[i] == 32)
			{
				sayac1++;
			}
			else break;
		}
		
		for (i = 0; source[i]; i++);
		
		if (source[i - 1] == 32)
		{
			for (j = i - 1 ; j > 0; j--)
			{
				if (source[j] == 32)
				{
					sayac2++;
				}
				else break;
			}
		}
		
		for (j = 0, k = sayac1; k < (i - sayac2); k++, j++)
		{
			dest[j] = source[k];
		}
	}
	else
	{
		for (i = 0; source[i]; i++);
		for (--i; source[i] == 32; i--);
		
		for (j = 0; j != i; j++)
		{
			dest[j] = source[j];
		}
		
		dest[j] = source[j];
	}
}

void rems(char *str)
{
	int i, j;
	
	for (i = 0; str[i]; i++)
	{
		while (str[i + 1] == 32 && str[i + 2] == 32)
		{
			printf("\n%s", str);
			
			for (j = i + 1; str[j + 1]; j++)
			{
				SWAP_P(&str[j], &str[j + 1]);
			}
			
			str[j] = 0;
		}
	}
}

int fth_atoi(char *d, int x, int y)
{
	int i, j = x - y - 1, sum = 0, on = 1, a[10] = {0};
	
	for (i = 0; i < x - y - 1; i++)
	{
		a[i] = d[y - 1 + j--] & 15;
	}
	
	for (i = 0; i < x - y - 1; i++, on *= 10)
	{
		sum += a[i] * on;
	}
	
	return (sum);
}

int main()
{
	int i, j, k, sayac = 0, n, h;
	char yazi[256] = {0}, yeni[256] = {0};
	
	for (k = 0; k < 2; k++)
	{
		int *d = NULL, *index = NULL;
		
		j = 0;
		
		fflush(stdin);
		gets(yazi);
		
		d      = (int*) malloc(sizeof(int) * (k ? n : 2));
		index  = (int*) malloc(sizeof(int) * (k ? n : 2));
		
		trim(yeni, yazi);
		rems(yeni);
		
		for (i = 0; yeni[i]; i++)
		{
			if (yeni[i] == 32 || !i)
			{
				index[j++] = i + (i ? 1 : 0);
			}
		}
		
		index[j] = i + 1;
		
		for (i = 0; i < (k ? n : 2); i++)
		{
			d[i] = fth_atoi(yeni, index[i + 1], index[i]);
		}
		
		if (k)
		{
			for (i = 0; i < n; sayac += d[i++] > h ? 2 : 1);
			
			printf("\n%d", sayac);
		}
		else
		{
			n = d[0];
			h = d[1];
		}
		
		free(d);
		free(index);
	}
	
	getch();
	return 0;
}