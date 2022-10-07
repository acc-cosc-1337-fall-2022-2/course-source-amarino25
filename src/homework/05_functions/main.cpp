/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/

#include<iostream>
#include "func.h"

using std::cout;
using std::cin;
using std::string;


int main() 
{
	char exit = 'N';

	do
	{
		int choice;
		std::cout<<"1. Get GC Content \n";
		std::cout<<"2. Get DNA Complement \n";
		std::cout<<"3. Exit \n";
		std::cout<<"\n Choose a function: ";
		std::cin>>choice;
		string dna_string = "";

		switch(choice)
		{
			case 1:
			{
				std::cout<<" Enter a DNA string to get the GC content: ";
				std::cin>>dna_string;
				std::cout<<"The GC content from the DNA string " <<dna_string<<" is" <<get_gc_content(dna_string)<<"\n\\n";

				
				
			}
			break;
			case 2:
			{
				
				std::cout<<"Enter a DNA string to get the DNA complement: ";
				std::cin>> dna_string;
				std::cout<<"The DNA Complement from the DNA string " <<dna_string<< "is" <<get_dna_complement(dna_string)<< "\n\\n";
			}
			break;
			case 3:
			{
				std::cout<<"Are you sure you want to exit? (Y/N: ";
				std::cin>>exit;
			}
			break;
			default:
			break;
		}
	}   while(exit != 'Y');
	
	return 0;
}