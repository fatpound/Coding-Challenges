#include <stdio.h>
#include <conio.h>

void display_duration(int sec)
{
	int temp1 = sec / 3600;
	int temp2 = (sec % 3600) / 60;
	int temp3 = (sec % 3600) % 60;
	
	if (temp1)
	{
		printf("%d saat", temp1);
	}
	
	if (temp2)
	{
		printf("%s%d dakika", temp1 ? " " : "", temp2);
	}
	
	if (temp3)
	{
		printf("%s%d saniye", temp2 || temp1 ? " " : "", temp3);
	}
	
	printf("\n");
}

int main()
{
	display_duration(3600);
	display_duration(240);
	display_duration(310);
	display_duration(7205);
	display_duration(14520);
	display_duration(4212);
	
	getch();
	return 0;
}
