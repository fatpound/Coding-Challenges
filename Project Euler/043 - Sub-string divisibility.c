#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

char x[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0};

U64 int p[7] = {2, 3, 5, 7, 11, 13, 17};

int IsUsed(char n)
{
	char i;
	
	for (i = 0; i < 10; i++)
	{
		if (x[i] == n)
		{
			return 1;
		}
	}
	
	return 0;
}

int main() // That is my stupidest code ever, but it works well.
{
	char a, b, c, d, e, f, g, h, i, j, k, L;
	U64 int on, sum = 0, flag;
	
	for (a = '1'; a <= '9'; a++)
	{
		for (x[0] = a, b = '0'; b <= '9'; b++)
		{
			if (IsUsed(b)) continue;
			
			for (x[1] = b, c = '0'; c <= '9'; c++)
			{
				if (IsUsed(c)) continue;
				
				for (x[2] = c, d = '0'; d <= '9'; d++)
				{
					if (IsUsed(d)) continue;
					
					for (x[3] = d, e = '0'; e <= '9'; e++)
					{
						if (IsUsed(e)) continue;
						
						for (x[4] = e, f = '0'; f <= '9'; f++)
						{
							if (IsUsed(f)) continue;
							
							for (x[5] = f, g = '0'; g <= '9'; g++)
							{
								if (IsUsed(g)) continue;
								
								for (x[6] = g, h = '0'; h <= '9'; h++)
								{
									if (IsUsed(h)) continue;
									
									for (x[7] = h, i = '0'; i <= '9'; i++)
									{
										if (IsUsed(i)) continue;
										
										for (x[8] = i, j = '0'; j <= '9'; j++)
										{
											if (IsUsed(j)) continue;
											
											for (x[9] = j, flag = k = 1; k < 8; k++)
											{
												if (((x[k] - 48) * 100 + (x[k + 1] - 48) * 10 + x[k + 2] - 48) % p[k - 1])
												{
													flag = 0;
													break;
												}
											}
											
											if (flag)
											{
												printf("%s\n", x);
												
												for (on = 1000000000, L = 0; L < 10; L++)
												{
													sum += (x[L] - 48) * on;
													on /= 10;
												}
											}
											
											x[9] = -1;
										}
										
										x[8] = -1;
									}
									
									x[7] = -1;
								}
								
								x[6] = -1;
							}
							
							x[5] = -1;
						}
						
						x[4] = -1;
					}
					
					x[3] = -1;
				}
				
				x[2] = -1;
			}
			
			x[1] = -1;
		}
		
		x[0] = -1;
	}
	
	printf("%llu", sum);
	
	return (!getch());
}
