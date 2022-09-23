//write include statements
#include "decisions.h"
#include <iostream>

using std::cout;
using std::cin;

    // Enter 1 2 3
	// cin >> choice
	// switch(choice)
	// case 1 : using if
	//	Letter Grade: 
	// 	cin >> grade
	//	using if
	// exit
	// case 2 : using switch
	// case 3 : exit
int main() 
{
	std::cout<<"1. Letter grade using if \n";
	std::cout<<"2. Letter grade using switch \n";
	std::cout<<"3. Exit \n";
	int choice;
	std::cin>>choice;

	switch(choice)
	{
		case 1:
		case 2:{
		auto grade = 0;
		cout<<"Enter a number grade: ";
		cin>>grade;

		if (choice == 1) {

		auto letterGrade = get_letter_grade_using_if(grade);

		cout<<"Letter grade is: "<<letterGrade << "\n";
		} 
		 else if (choice == 2) {

		auto letterGrade = get_letter_grade_using_switch(grade);

		cout<<"Letter grade is: "<<letterGrade << "\n";
		}
}
	case 3:
	cout<< "Goodbye";
	return 0;
	}

}
