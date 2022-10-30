#include"tic_tac_toe.h"
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	tic_tac_toe game;
	string first_player;
	int position;
	bool loop_againl

	do
	{
		cout<<"Enter X or O:";
		cin>>first_player;
	while(first_player!="X"&&first_player!="O")
	{
		cout<<"Invalid try again"<<"\n";
		cout<<"Enter X or O:";
		cin>> first_player 
	}
	start_game(first_player);

	do
	{
		display_board();
		cout<<"Enter a number form 1 to 9:";
		cin>>position;

		mark_board(position);
	
	} 
	while(game_over()==false);
	display_board();

	cout<<"Play again(1 for yes 0 for no)";
	cin>>loop_again;
	
	
	return 0;
}