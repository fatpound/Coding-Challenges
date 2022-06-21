#include <stdio.h>
#include <conio.h>

void print_binary(int val)
{
	int i;
	
	for (i = 1 << 30; i; i >>= 1)
	{
		printf((val & i) ? "1" : "0");
	}
}

int main()
{
	int k;
	
	for (k = 17800; k <= 17820; ++k)
	{
		printf("%d = ", k);
		print_binary(k);
		
		if (k != 17820)
		{
			putchar('\n');
		}
	}
	
	getch();
	return 0;
}
