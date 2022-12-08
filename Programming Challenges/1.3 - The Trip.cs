namespace PC; // Programmed by Weylyn, fixed by fatpound

internal class PC
{
    static float Calculate(int students)
    {
        if (students == 0)
            return 0;

        float[] expenses = new float[students];
        float average = 0;
        for (int i = 0; i < students; i++)
        {
            expenses[i] = float.Parse(Console.ReadLine()!);
            average += expenses[i];
        }

        average /= students;

        float exchange = 0;

        for (int i = 0; i < students; i++)
        {
            exchange += MathF.Abs(expenses[i] - average);
        }

        exchange /= 2;

        float temp = average - (int)average;

        while (temp > 0.01f)
        {
            temp -= 0.01f;
        }

        if (temp != 0)
        {
            float shift = average * 100;

            if ((shift - (int)shift) < 1)
            {
                exchange -= 0.01f;
            }
        }

        exchange *= 100;
        exchange  = (float)((int)exchange);
        exchange /= 100;

        return exchange;
    }

    static int Main(string[] args)
    {
        System.Globalization.CultureInfo.CurrentCulture = System.Globalization.CultureInfo.InvariantCulture;

        start:
        int students = int.Parse(Console.ReadLine()!);
        Console.WriteLine(Calculate(students));
        if (students != 0)
            goto start;

        return 0;
    }
}
