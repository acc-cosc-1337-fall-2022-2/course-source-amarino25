//write include statements
#include<iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;



int main() 
{
	char exit = 'N';

	do
	{	
		int choice;
		std::cout<<"1. Factorial \n";
		std::cout<<"2. Greatest Common Divisor \n";
		std::cout<<"3. Exit \n";
		std::cout<<"\nChoose a function: ";
		std::cin>>choice;
		
		switch(choice) 
		{
			case 1:
			{
				int num;
				std::cout<<"Enter a number: ";
				std::cin>>num;
				int value = factorial(num);
				std::cout<<num<<" factorial is "<<value<<"\n\n";
			}
			break;
			case 2:
			{
				int num1, num2;
				std::cout<<"Enter the first number: ";
				std::cin>>num1;
				std::cout<<"Enter the second number: ";
				std::cin>>num2;
				int value = gcd(num1, num2);
				std::cout<<"The Greatest Common Divisor of "<<num1<<" and "<<num2<<" is "<<value<<"\n\\n";
			}
			break;
			case 3:
			{
				std::cout<<"Are you sure you want to exit? (Y/N): ";
				std::cin>>exit;
			}
			break;
			default:
			break;			
		}
	}	while (exit != 'Y');
		
	return 0;
}