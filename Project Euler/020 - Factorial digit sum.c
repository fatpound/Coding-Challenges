#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SWAP_P(x, y) (*(x) == *(y) ? 0 : (*(x) ^= *(y) ^= *(x) ^= *(y)))

void RotateLeft(char *s, int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < strlen(s) - 1; j++)
		{
			SWAP_P(&s[j], &s[j + 1]);
		}
	}
}

void AddLong(char *f, char *s1, char *s2, char *s3, char *s4, int j)
{
	int i, len = strlen(s1), top, elde;
	
	if (j > 0) RotateLeft(s2, 1);
	if (j > 1) RotateLeft(s3, 2);
	
	for (elde = 0, i = len - 1; i >= 0; i--)
	{
		top = s1[i] - 48 + elde;
		
		if (j > 0) top += (s2[i] - 48);
		if (j > 1) top += (s3[i] - 48);
		
		s4[i] = (top % 10) + 48;
		
		elde = top / 10;
	}
	
	strcpy(f, s4);
}

int main()
{
	int i, j, k, n, prod, count, sum = 0, eldevar;
	double L = 0;
	char *f = NULL, *s1, *s2, *s3, *s4;
	
	for (i = 2; i <= 100; L += log10(i++));
	
	count = (int)floor(L) + 1;
	
	f  = (char*) malloc(sizeof(char) * (count + 1));
	s1 = (char*) malloc(sizeof(char) * (count + 1));
	s2 = (char*) malloc(sizeof(char) * (count + 1));
	s3 = (char*) malloc(sizeof(char) * (count + 1));
	s4 = (char*) malloc(sizeof(char) * (count + 1));
	
	for (i = 0; i < count; f[i] = s1[i] = s2[i] = s3[i] = s4[i] = '0', i++);
	for (f[i] = s1[i] = s2[i] = s3[i] = s4[i] = 0, f[i - 1] = '1', i = 2; i <= 100; i++)
	{
		for (n = i, j = 0; j < (i < 10 ? 1 : (i < 100 ? 2 : 3)); j++, n /= 10)
		{
			for (eldevar = 0, k = count - 1; k >= 0; k--)
			{
				prod = (f[k] - 48) * (n % 10) + eldevar;
				
				switch (j)
				{
					case 0:
					{
						s1[k] = (prod % 10) + 48;
						break;
					}
					
					case 1:
					{
						s2[k] = (prod % 10) + 48;
						break;
					}
					
					case 2:
					{
						s3[k] = (prod % 10) + 48;
						break;
					}
					
					default:
						break;
				}
				
				eldevar = prod / 10;
			}
		}
		
		AddLong(f, s1, s2, s3, s4, j - 1);
	}
	
	// printf("%s\n", f); // 100!
	
	for (i = 0; i < count; i++)
	{
		sum += (f[i] - 48);
	}
	
	printf("%d", sum);
	
	return (!getch());
}
