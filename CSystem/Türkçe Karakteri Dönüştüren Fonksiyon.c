#include <stdio.h>
#include <conio.h>

#define ESC 0x001B

int to_eng(int ch)
{
	int turn = 13;
	
	switch (ch)
	{
		case 128:
			turn = 'C';
			break;
		
		case 166:
			turn = 'G';
			break;
		
		case 152:
			turn = 'I';
			break;
		
		case 153:
			turn = 'O';
			break;
		
		case 158:
			turn = 'S';
			break;
		
		case 154:
			turn = 'U';
			break;
		
		case 135:
			turn = 'c';
			break;
		
		case 167:
			turn = 'g';
			break;
		
		case 141:
			turn = 'i';
			break;
		
		case 148:
			turn = 'o';
			break;
		
		case 159:
			turn = 's';
			break;
		
		case 129:
			turn = 'u';
			break;
		
		default:
			turn = 32;
			break;
	}
	
	return (turn);
}

int main()
{
	int ch;
	
	while ((ch = getch()) != ESC)
	{
		putchar(to_eng(ch));
	}
	
	getch();
	return 0;
}
