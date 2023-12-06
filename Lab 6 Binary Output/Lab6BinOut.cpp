#include "Lab6BinOut.h"
#include<iostream>
#include<fstream>

Lab6BinOut::Lab6BinOut()
{
	char ch;
}

Lab6BinOut::~Lab6BinOut()
{
}

void Lab6BinOut::BinaryInput()
{
	std::ifstream ReadBinary("BinaryIn.dat");// Call the BinaryIn.dat file for data
	char read;
	int decimal = 0;
	while (ReadBinary) // Creats a while loop for reading values
	{
		std::string BinaryValues; // I assumed this made a string of all the characters in one line 
		ReadBinary >> read; // stores the value
		if (read != '0' || read != '1') // Suppose to skip bad digits but I don't understand why I get the output for all of them
		{
			std::cout << "\tBad Didgit Output!" << std::endl;
				continue; // Suppose to skip to the next line
		}
		decimal = decimal * 2 + (read - '0'); // This what Chat GPT says to do. But what I would do is the same thing but tpye cast read into an integer so then it can be properly calulated
		std::cout << "\t" << BinaryValues << "\t\t" << decimal; // outputs the information to "graph"
	}
	ReadBinary.close(); // closes file
}
//What I would do to skip spaces is make some sort of for statment interviened with the ReadBinary with the ignore function. then the reading...
//... marker would just skip the arbitrary spaces/underscores. Other it's literally just this but actually correct lol.
// It's a really "easy" lab just really hard to digest on what to do.  
int Lab6BinOut::getBinaryInput()
{
	return 0;
}

void Lab6BinOut::ReadDigits()
{

}

int Lab6BinOut::getDigits()
{
	return 0;
}
