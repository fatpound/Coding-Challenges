#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    // 2 lik sayi sistemi / binary
    unsigned int b = 128;
    char binary[33];

    for(i = 0; i < 32; i++)
    {
        binary[i] = '0';
    }

    binary[32] = '\0';
    int index = 31;
    while(b)
    {
        binary[index] = (b & 1) | 48;
        b >>= 1; // b = b >> 1;
        index--;
    }

    printf("%s\n", binary);

    // 8 lik sayi sistemi / octal
    unsigned int o = 15;
    char octal[17];

    for(i = 0; i < 16; i++)
    {
        octal[i] = '0';
    }

    octal[16] = '\0';
    index = 15;
    while(o)
    {
        octal[index] = (o & 0b111) | 48;
        o >>= 3; // o = o >> 3;
        index--;
    }

    printf("%s\n", octal);

    //16 lik sayi sistemi / hexadecimal
    unsigned int h = 15;
    char hex[10];

    for(i = 0; i < 9; i++)
    {
        hex[i] = '0';
    }

    hex[9] = '\0';
    index = 8;
    while(h)
    {
        int temp = h & 0b1111;
        hex[index] = (temp > 9 ? temp + 55 : temp | 48);
        h >>= 4; // h = h >> 4;
        index--;
    }

    printf("%s", hex);

	getch();
	return 0;
}
