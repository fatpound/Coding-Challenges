static int Main()
{
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			if (y > x && y < 8 - x)
			{
				Console.Write(" ");
			}
			else
			{
				Console.Write("{0}", 2 * (y > 4 ? 8 - y : y) + 1);
			}
		}
		
		if (x != 4) Console.Write("\n");
	}
	
	return 0;
}
