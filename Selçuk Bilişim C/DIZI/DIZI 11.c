#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

int main()
{
	int i, x, flag = 0, dongu = 1, temp, d[10];
	
	while (1)
	{
		if (flag == 0) printf("lutfen bir sayi giriniz > ");
		else printf("girdiginiz sayi dizide zaten bulunmaktadir.\nlutfen farkli bir sayi giriniz > ");
		
		scanf("%d", &x);
		printf("\n");
		
		flag = 0;
		
		if (dongu == 1)
		{
			d[dongu - 1] = x;
			dongu++;
		}
		else
		{
			for (i = 0; i < dongu; i++)
			{
				if (d[i] == x)
				{
					flag = 1;
					break;
				}
			}
			
			if (flag == 0)
			{
				d[dongu - 1] = x;
				dongu++;
			}
		}
		
		if (dongu == 11) break;
	}
	
	while (1)
	{
		flag = 0;
		
		for (i = 0; i < 9; i++)
		{
			if (d[i] < d[i+1])
			{
				SWAP(d[i], d[i + 1]);
				
				flag = 1;
			}
		}
		
		if (flag == 0) break;
	}
	
	for (i = 0; i < 9; i++)
	{
		printf("%d > ", d[i]);
	}
	
	printf("%d", d[i]);
	
	getch();
	return 0;
}
