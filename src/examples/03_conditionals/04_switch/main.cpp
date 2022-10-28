#include<iostream>
#include "switch.h"

using std::cout;
using std::cin;

int main() 
{
	
auto option =0;
cout<<"enter option:";
cin>>option;

auto result = menu(option);

cout<<"result:" <<result<<"\n";

	return 0;
}