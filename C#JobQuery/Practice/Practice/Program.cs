﻿using System;

namespace Practice
{
    class Program
    {
        static void Main(string[] args)
        {
            var arr = new int[3,3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arr[i, j] = int.Parse(Console.ReadLine());
                }
            }
        }
    }
}