#include <stdio.h>
#include <conio.h>

int main()
{
	int i, sum = 0, n;
	
	printf("hangi sayiya kadar olan 3 ve 5'in katlari toplansin? > ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	
	printf("%d", sum);
	
	getch();
	return 0;
}
