using System;
using System.Collections.Generic;

namespace StackDataStructure
{
    class Program
    {
        static void Main(string[] args)
        {
            var stack = new Stack<string>(1);
            
            stack.Push("item 1");
            stack.Push("item 2");
            stack.Push("item 3");
            
            Console.WriteLine("[Peek] Element: {0}", stack.Peek()); // Peek - 

            var count = stack.Count;
            for (var i = 0; i < count; i++)
            {
                Console.WriteLine("[Pop] Element: {0}", stack.Pop()); // Pop
            }
        }
    }
}
