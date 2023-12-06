/*
* Name: Ty Schluter
*  C++ FA23
* Lab Name: Lab 6 Binary to Decimal Conversion
• Description: Write a C++ program that reads characters representing binary (base 2)
numbers from a data file called BinaryIn.dat and translates them to decimal (base 10)
numbers. The binary and decimal numbers should be output in two columns with
appropriate headings.There is only one binary number per input line, but an arbitrary number of blanks can
precede the number. The program must read the binary numbers one character at a
time. As each character is read, the program multiplies the total decimal value by 2 and
adds either a 1 or 0, depending on the input character. The program should check for
bad data; if it encounters anything except a 1 or 0, it should output the message “Bad
digit on input.” The maximum number of spaces that could exist between any two digits
of a binary number in the input file will be one, in which case, the binary digit would be
considered bad. The output for this program should be to the screen and not an output
file. In order to read in one character at a time, you will need to use the cin.get
command. When you have completed this lab, upload a copy of the .cpp file called
Lab6.cpp and BinaryIn.dat to GitHub. Make sure to use classes and proper comments
and coding technique.
*/

#include<iostream>
#include<fstream>
#include "Lab6BinOut.h"

using namespace std;

int main()
{
	Lab6BinOut d;
	std::cout << "\tBinary\t\tDecimal\t" << std::endl; // Makes chart output
	d.BinaryInput(); // calls the function for compleating the lab
	
	return 0;
}