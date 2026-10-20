using System;

class URI
{

    static void Main(string[] args)
    {

        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());

        Console.WriteLine($"MEDIA = {((a * 3.5 + b * 7.5) / 11):F5}");

    }

}