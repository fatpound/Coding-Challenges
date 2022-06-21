#include <stdio.h>
#include <conio.h>

int get_hex_value(int ch)
{
	return ((ch > 47 && ch < 71) ? ("0123456789ABCDEF\0"[(ch > 64 ? ch - 55 : ch - 48) % 16]) - (ch > 64 ? 55 : 48) : -1);
}

int main()
{
	printf("%d\n", get_hex_value('A'));      /* 10 */
	printf("%d\n", get_hex_value('6'));      /* 6 */
	printf("%d\n", get_hex_value('F'));      /* 15 */
	printf("%d\n", get_hex_value('0'));      /* 0 */
	printf("%d\n", get_hex_value('C'));      /* 12 */
	printf("%d", get_hex_value('M'));      /* -1 */
	
	getch();
	return 0;
}
