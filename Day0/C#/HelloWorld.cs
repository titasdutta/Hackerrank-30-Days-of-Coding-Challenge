/******************************************************************
 * C# Progarm: HelloWorld.cs
 * author: Titas Dutta
 *
 * Run the program:
 *
 * Compile: gmcs HelloWorld.cs
 * Run: mono HelloWorld.exe
 ******************************************************************/
using System;
using System.Collections.Generic;
using System.IO;

class HelloWorld {
    static void Main(String[] args) {
        // Declare a variable named 'inputString' to holf our input
        String inputString;
        
        // Read a full line of input from stdin (cin) and save it 
        inputString = Console.ReadLine();
        
        //Printa string literal saying "Hello, World." to stdout
        Console.WriteLine("Hello, World");
        
        // Print the content of 'inputString'
        Console.WriteLine(inputString);
        
    }
}
 
