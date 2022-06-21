#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (x == y ? x = y : (x ^= y ^= x ^= y))

int main()
{
	int i, flag = 1, dongu = 0;
	char c, d[3];
	
	do
	{
		printf("%c", c = getch());
		
		if (dongu < 3)
		{
			d[dongu] = c;
		}
		else
		{
			SWAP(d[0], d[1]);
			SWAP(d[1], d[2]);
			
			d[2] = c;
		}
		
		dongu++;
		
		if (d[0] == 'e' && d[1] == 'n' && d[2] == 'd')
		{
			flag = 0;
		}
	}
	while (flag);
	
	getch();
	return 0;
}
