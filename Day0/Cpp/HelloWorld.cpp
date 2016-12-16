/**
 * HelloWorld.cpp by Titas Dutta
 * 
 * Compile: g++ -g -O0 -std=c++11 -Wall -Werror -Wshadow HelloWorld.cpp -lm -o HelloWorld
 * Execute: ./HelloWorld
 * 
 * On first line, print string literal 'Hello, World'.
 * On second line, take userinput and print it.
 */
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Declare a variable named 'Input_string' to hold out input
    string input_string;
    
    // Read a full line of input from stdin (cin) and save to input_string
    getline(cin, input_string);
    
    // print a string literal saying "Hello, World." to stdout.
    cout << "Hello, World." << endl;
    
    // Write input_string to stdout
    cout << input_string << endl;
    
    return 0;
}