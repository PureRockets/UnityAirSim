using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace MyLibConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            MyLibWrapper mywrap = new MyLibWrapper();


            Console.WriteLine("Divided = " + mywrap.Divide(10.0, 3.3));
            Console.WriteLine("Asin = " + mywrap.Myturboasin(5).ToString());
            Console.ReadLine();
        }
    }
}
