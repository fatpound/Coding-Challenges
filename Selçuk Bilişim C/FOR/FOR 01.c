#include <stdio.h>
#include <conio.h>

/*

1’den 10’a kadar ekran çıktısı aşağıdaki gibi olacak şekilde çarpım tablosunu ekrana yazan programı yazınız.

1 x 1= 1
1 x 2 = 2
1 x 3 = 3 vs.

*/

int main()
{
	int x, y;
	
	for (x = 1; x < 11; x++)
	{
		for (y = 1; y < 11; y++)
		{
			printf("%d x %2d = %3d%s", x, y, x * y, x == 10 && y == 10 ? "" : "\n");
		}
		
		if (x != 10) printf("------------%s\n", x == 9 ? "-" : "");
	}
	
	getch();
	return 0;
}
