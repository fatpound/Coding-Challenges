#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define L64 long long

#define N 50000000

int main()
{
	L64 int i, n, p, x, count = 0, *t = NULL;
	
	t = (L64 int*) malloc(sizeof(L64 int) * (N + 1));
	t[0] = t[1] = 1;
	
	for (n = 2; n <= N; t[n] = 2LL * n * n - 1, n++);
	for (n = 2; n <= N; n++)
	{
		if (t[n] == (2LL * n * n - 1))
		{
			count++;
		}
		
		if ((p = t[n]) > 1 && p <= N * 2)
		{
			for (i = n + p; i < N + 1; i += p)
			{
				while (t[i] % p == 0)
				{
					t[i] /= p;
				}
			}
			
			for (i = n + (p - n) * 2 % p; i < N + 1; i += p)
			{
				while (t[i] % p == 0)
				{
					t[i] /= p;
				}
			}
		}
	}
	
	printf("%lld", count);
	
	return !_getch();
}
