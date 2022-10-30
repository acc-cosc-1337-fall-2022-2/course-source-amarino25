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
	bool loop_again = true;
	

	while (loop_again)
	{
		do
		{
			cout<<"Enter X or O:";
			cin>>first_player;
		}
		while(first_player!="X" && first_player!="O");

		game.start_game(first_player);
		
		do
		{
			game.display_board();
			cout<<"Enter a number from 1 to 9:";
			cin>>position;

			game.mark_board(position);
		
		} 
		while(game.game_over()==false);

		game.display_board();

		string choice = "";
		do
		{
		cout<<"Play again(Y for yes N for no)";
		cin>>choice;		
		loop_again = choice == "Y";
		}
		while(choice!="Y"&&choice!="N");
	}
	

	return 0;
	
	
}