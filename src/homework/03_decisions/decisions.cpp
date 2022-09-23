//write include statement for decisions header
#include "decisions.h"

using std::string;
//returns 'A' when value is between 90 and 100
//returns 'B' when value is between 80 and 89
//returns 'C' when value is between 70 and 79
//returns 'D' when value is between 60 and 69
//returns 'F' when value is between 00 and 59

//Write code for function(s) code here
std::string get_letter_grade_using_if(int grade)
{
    string letterGrade;
    if(grade >= 90 && grade <= 100)
    {
        letterGrade = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        letterGrade = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        letterGrade = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        letterGrade = "D";
    }
    else if(grade >= 00 && grade <= 59)
    {
        letterGrade = "F";
    }
    else
    {
        letterGrade = "Number is out of range";
    }
    
    return letterGrade;
}
// Wrtie code using switch
//returns 'A' when value is between 90 and 100
//returns 'B' when value is between 80 and 89
//returns 'C' when value is between 70 and 79
//returns 'D' when value is between 60 and 69
//returns 'F' when value is between 00 and 59

std::string get_letter_grade_using_switch(int grade)
{
    std:string letterGrade;

    switch(grade)
    {
        case 95:
            letterGrade ="A";
            break;
        case 85:
            letterGrade ="B";
            break;
        case 75:
            letterGrade ="C";
            break;
        case 65:
            letterGrade ="D";
            break;
        case 50:
            letterGrade ="F";
            break;
        default:
            letterGrade = "Number is out of range \n";
            break;
    }
    return letterGrade;
}
