using System.Collections.Generic;

namespace PC; // Programmed by Weylyn

internal class PC
{
    static int Main(string[] args)
    {
        int[] reg = new int[10];
        int[] ram = new int[1000];
        int ramptr = 0;

        int index = 2;
        string[] lines = Console.In.ReadToEnd().Split('\n',
            StringSplitOptions.TrimEntries);

        int testCase = int.Parse(lines[0]);
        for (int t = 0; t < testCase; t++)
        {
            while (index < lines.Length)
            {
                ram[ramptr++] = int.Parse(lines[index++]);
                
                if (string.IsNullOrEmpty(lines[index]))
                    break;
            }

            int executed = 0;
            for (int p = 0; p < ramptr; p++)
            {
                executed++;

                if (ram[p] == 100)
                    break;

                int s = ram[p] / 100 % 10;
                int a = ram[p] / 10 % 10;
                int b = ram[p] / 1 % 10;

                switch (s)
                {
                    case 2:
                        reg[a] = b % 1000;
                        break;

                    case 3:
                        reg[a] = (reg[a] + b) % 1000;
                        break;

                    case 4:
                        reg[a] = (reg[a] * b) % 1000;
                        break;

                    case 5:
                        reg[a] = reg[b] % 1000;
                        break;

                    case 6:
                        reg[a] = (reg[a] + reg[b]) % 1000;
                        break;

                    case 7:
                        reg[a] = (reg[a] * reg[b]) % 1000;
                        break;

                    case 8:
                        reg[a] = ram[reg[b]];
                        break;

                    case 9:
                        ram[reg[b]] = reg[a];
                        break;

                    case 0:
                        if (reg[b] != 0)
                            p = reg[a] - 1;
                        break;
                }
            }

            Console.WriteLine(executed);
        }

        return 0;
    }
}
