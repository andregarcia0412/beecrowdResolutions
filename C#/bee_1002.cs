using System;

class URI
{
    static void Main(string[] args)
    {
        double raio = double.Parse(Console.ReadLine());
        Console.WriteLine($"A={(3.14159 * raio * raio):F4}");
    }
}
