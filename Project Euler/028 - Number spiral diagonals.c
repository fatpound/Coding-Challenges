#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int x = 1001;
	
	int i, j = 0, sum = 0, ekle = 1, sat = x / 2, sut = x / 2, flag = 0, **d;
	char yon = 'r';
	
	d = (int**) malloc(sizeof(int*) * x);
	
	for (i = 0; i < x; d[i++] = (int*) malloc(sizeof(int) * x));
	for (i = 1, j = 0; i < x * x + 1; i++, j--)
	{
		d[sat][sut] = i;
		
		sut += (yon == 'r' ? 1 : (yon == 'l' ? -1 : 0));
		sat += (yon == 'd' ? 1 : (yon == 'u' ? -1 : 0));
		
		if (!j)
		{
			j = ekle;
			
			if (flag = !flag)
			{
				ekle++;
			}
			
			yon = (yon == 'r' ? 'd' : (yon == 'd' ? 'l' : (yon == 'l' ? 'u' : (yon == 'u' ? 'r' : yon))));
		}
	}
	
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (i == j || (i + j == x - 1))
			{
				sum += d[i][j];
			}
		}
	}
	
	printf("%d", sum);
	
	getch();
	return 0;
}
