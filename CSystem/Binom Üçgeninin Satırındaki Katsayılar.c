#include <stdio.h>
#include <conio.h>

double Comb(int n, int r)
{
	return (r > 1 ? (((double) n / r) * (Comb(n - 1, r - 1))) : (r ? n : 1));
}

int main()
{
	int i, j;
	
	printf("satir > ");
	scanf("%d", &j);
	
	for (i = 0; i < j + 1; i++)
	{
		printf("%g%s", Comb(j, i), i != j ? " " : "");
	}
	
	getch();
	return 0;
}
