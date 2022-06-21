#include <stdio.h>
#include <conio.h>

char hexharf[17] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };

int get_hex_char(int n)
{
	return (hexharf[n % 16]);
}

int main()
{
	putchar(get_hex_char(15));
	putchar(get_hex_char(10));
	putchar(get_hex_char(0));
	putchar(get_hex_char(5));
	putchar(get_hex_char(13));
	
	getch();
	return 0;
}
