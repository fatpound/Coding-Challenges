#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, pay = 1, payda = 1, sonuc, n, r;
	
	printf("n'in r'li kombinasyonunu giriniz:\n");
	scanf("%d%d", &n, &r);
	
	for (a = 1; a <= r; a++)
	{
		pay *= n;
		payda *= a;
		n--;
	}
	
	sonuc = pay / payda;
	
	printf("\nC(%d,%d) = %d", n + a - 1, r, sonuc);

	getch();
	return 0;
}
