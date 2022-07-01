#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, C, i, n;
	
	printf("pascal ucgeni kac satir olsun? > ");
	scanf("%d", &n);
	
	for (a = 0; a < n; a++)
	{
		C = 1;
		
    	for (i = 1; i < n - a; i++, printf(" "));
    	
		for (b = 0; b <= a; b++)
		{
			printf("%d ", C);
			
			C = C * (a - b) / (b + 1);
			
			// Her satýrda kombinasyonun kýsayolu kullanýlmýþtýr
			// Saða doðru gittikçe;
			// C(n, b + 1) = (n / 1) * ((n - 1) / 2) * ((n - 2) / 3) * ... * (1 / (b + 1))
		}
		
		if (a != n - 1) printf("\n");
	}
	
	getch();
	return 0;
}
