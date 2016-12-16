/**
 * HelloWorld.c by Titas Dutta
 * 
 * Compile: gcc -ggdb3 -O0 -std=c11 -Wall -Werror -Wshadow HelloWorld.c -lm -o HelloWorld
 * Execute: ./HelloWorld_C
 * 
 * On first line, print string literal 'Hello, World'.
 * On second line, take userinput and print it.
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <stdlib.h>
 
 int main() 
 {
    // Declare a variable named 'input_string' to hold our input
    char input_string[105];
    
    // Read a full line of input from stdin and save it to our 
    // variable input_string
    scanf("%[^\n]", input_string);
    
    // Print a string literal saying "Hello, World." to stdout using
    // printf()
    
    printf("Hello, World.\n");
    
    // write a line of code the prints the contents of input_string
    printf("%s\n", input_string);
    
    return 0;
 }