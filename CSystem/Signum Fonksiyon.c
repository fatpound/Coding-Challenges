#include <stdio.h>
#include <conio.h>

#define SGN(x) (x ? ((x > 0) ? 1 : -1) : 0)

int signum(int value)
{
	return (value ? ((value > 0) ? 1 : -1) : 0);
}

int main()
{
	int a;
	
	printf("bir sayi girin : ");
	scanf("%d", &a);
	
	if (signum(a))
	{
		printf("Girdiginiz sayi %stif bir sayidir", signum(a) == 1 ? "pozi" : "nega");
	}
	else
	{
		printf("Girdiginiz sayi 0'dir");
	}
	
	getch();
	return 0;
}
