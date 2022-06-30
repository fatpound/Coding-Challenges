static void Main(string[] args)
{
	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			Console.Write(((x < 5 && y < x + 1) || (x > 3 && y > x)) ? "5" : " ");
		}
		
		if (x != 8) Console.Write("\n");
	}
	
	return 0;
}