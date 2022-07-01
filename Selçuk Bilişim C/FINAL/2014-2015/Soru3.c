#include <stdio.h>
#include <conio.h>

int  topla(int a, int b) {return (a + b);}
int  cikar(int a, int b) {return (a - b);}
int   carp(int a, int b) {return (a * b);}
double bol(int a, int b) {return (a / b);}

/*

int EBOB(int x, int y)
{
	if(((int) bol(topla(x, x), topla(bol(x, x), bol(x, x)))) == 0) return ((int) bol(topla(y, y), topla(bol(y, y), bol(y, y))));
	if(((int) bol(topla(y, y), topla(bol(y, y), bol(y, y)))) == 0 || ((int) bol(topla(x, x), topla(bol(x, x), bol(x, x)))) == ((int) bol(topla(y, y), topla(bol(y, y), bol(y, y))))) return ((int) bol(topla(x, x), topla(bol(x, x), bol(x, x))));
	
	return (((int) bol(topla(x, x), topla(bol(x, x), bol(x, x)))) > ((int) bol(topla(y, y), topla(bol(y, y), bol(y, y)))) ? EBOB(cikar(x, y), (int) bol(topla(y, y), topla(bol(y, y), bol(y, y)))) : EBOB((int) bol(topla(x, x), topla(bol(x, x), bol(x, x))), cikar(y, x)));
}

*/

int EBOB(int x, int y)
{
	if(x == 0) return y;
	if(y == 0 || x == y) return x;
	
	return (x > y ? EBOB(cikar(x, y), y) : EBOB(x, cikar(y, x)));
}

int main()
{
	printf("%d", EBOB(3, 6));
	
	getch();
	return 0;
}

