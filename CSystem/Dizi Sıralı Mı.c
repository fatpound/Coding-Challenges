#include <stdio.h>
#include <conio.h>

int is_sorted(int d[], int size)
{
	int i;
	
	for (i = 0; i < size - 1 ; i++)
	{
		if (d[i] > d[i + 1]) return 0;
	}
	
	return 1;
}

int main()
{
	int d[5] = { 0, 1, 3, 4, 4 };
	
	printf("%d", is_sorted(d, 5));
	
	getch();
	return 0;
}
