#include <stdio.h>
#include <conio.h>

int d[6];

void FillArray(int x)
{
	int i, on = 100000;
	
	for (i = 0; i < 6; i++)
	{
		d[i] = x % 10;
		x /= 10;
		on /= 10;
	}
}

int main()
{
	int i, j, prod;
	
	for (i = 700; i < 1000; i++)
	{
		for (j = 700; j < 999; j++)
		{	
			FillArray(prod = i * j);
			
			if (d[0] == 9 && d[0] == d[5] && d[1] == d[4] && d[2] == d[3])
			{
				printf("%d x %d = %d\n", i, j, prod);
			}
		}
	}
	
	getch();
	return 0;
}
