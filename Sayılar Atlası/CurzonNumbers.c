#include <stdio.h>
#include <conio.h>

int IsCurzon(int n)
{
	return (((1 << n) + 1) % (2 * n + 1) == 0);
}

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		if (IsCurzon(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}
