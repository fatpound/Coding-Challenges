namespace ProjectEuler
{
	internal class Solution28
	{
		static int Main(string[] args)
		{
			int x = 1001;
			int[,] d = new int[x, x];
			
			int i, j = 0, sum = 0, ekle = 1, max = x * x, sat = x / 2, sut = x / 2;
			bool flag = false;
			
			char yon = 'r';

			for (i = 1, j = 0; i < x * x + 1; i++, j--)
			{
				d[sat, sut] = i;

				sut += (yon == 'r' ? 1 : (yon == 'l' ? -1 : 0));
				sat += (yon == 'd' ? 1 : (yon == 'u' ? -1 : 0));

				if (j == 0)
				{
					j = ekle;

					if (flag = !flag)
					{
						ekle++;
					}

					yon = (yon == 'r' ? 'd' : (yon == 'd' ? 'l' : (yon == 'l' ? 'u' : (yon == 'u' ? 'r' : yon))));
				}
			}

			for (i = 0; i < x; i++)
			{
				for (j = 0; j < x; j++)
				{
					if (i == j || (i + j == x - 1))
					{
						sum += d[i, j];
					}
				}
			}

			Console.WriteLine(sum);
			
			return 0;
		}
	}
}
