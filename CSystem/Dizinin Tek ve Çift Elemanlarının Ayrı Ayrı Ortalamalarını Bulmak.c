#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int i, tek = 0, sum[2] = { 0 }, a[SIZE] = { 3, 8, 12, 30, 56, 35, 78, 31, 69, 40 };
	
	for (i = 0; i < SIZE; i++)
	{
		if (a[i] & 1)
		{
			tek++;
		}
		
		sum[(a[i] & 1) ? 0 : 1] += a[i];
	}
	
	if (!tek || tek == SIZE)
	{
		printf("Dizide hic %s sayi yoktur!\n\n%s sayilarin ortalamasi = %lf", !tek ? "tek" : "cift", !tek ? "cift" : "tek", !tek ? ((double) sum[1] / SIZE) : ((double) sum[0] / SIZE));
	}
	else
	{
		printf("tek  sayilarin ortalamasi = %lf\ncift sayilarin ortalamasi = %lf", (double) sum[0] / tek, (double) sum[1] / (SIZE - tek));
	}
	
	getch();
	return 0;
}
