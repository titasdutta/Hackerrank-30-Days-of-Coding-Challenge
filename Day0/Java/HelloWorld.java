/**
 * HelloWorld.java by Titas Dutta
 * 
 * Compile: javac HelloWorld.java
 * Execute: java HelloWorld
 * 
 * On first line, print string literal 'Hello, World'.
 * On second line, take userinput and print it.
 */
 
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class HelloWorld {
    public static void main(String[] args) {
        // Create a Scanner object to read input from stdin.
        Scanner scan = new Scanner(System.in);
        
        //Read a full line of input from stdin and save it
        String inputString = scan.nextLine();
        
        // Close the scanner object, because we've finished reading 
        // all of the input from stdin needed for this challenge.
        scan.close();
        
        // print a string literal saying "Hello, World." to stdoout
        System.out.println("Hello, World.");
        
        // Write a line of code here that prints the content of inputString
        System.out.println(inputString);
        
    }
}

 