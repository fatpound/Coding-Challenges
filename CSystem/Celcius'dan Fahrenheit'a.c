#include <stdio.h>
#include <conio.h>

int cel_to_fahr(int celsius)
{
	return ((int) (((float) celsius / 10) * 18 + 32));
}

int main()
{
	int cel;
	
	scanf("%d", &cel);
	printf("%d celsius = %d fahrenheit", cel, cel_to_fahr(cel));
	
	getch();
	return 0;
}
