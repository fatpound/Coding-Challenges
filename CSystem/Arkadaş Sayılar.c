#include <stdio.h>
#include <conio.h>

int SumOfDivs(int x) // �arpanlar� toplar
{
	int i, sod = 0;
	
	for (i = 1; i < x; i++)
	{
		if (x % i == 0) sod += i;
	}
	
	return (sod);
}

int are_friends(int x, int y) // Arkada� say�lar
{
	return (SumOfDivs(x) == y && SumOfDivs(y) == x ? 1 : 0);
}

int main()
{
	printf("%d", are_friends(284, 220));
	
	getch();
	return 0;
}

