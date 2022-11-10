#include"tic_tac_toe.h"
#include<iostream>
#include<string>
#include "tic_tac_toe_manager.h"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	
	tic_tac_toe game;
	TicTacToeManager game;
	string first_player;
	bool loop_again = true;
	
	

	while (loop_again)
	{
		do
		{
			
		while(first_player!="X" && first_player!="O")
		{
			cout<<"Enter X or O:";
			cin>>first_player;
		}

		game.start_game(first_player);
		
		do
		{
			cin>>tic_tac_toe;
			cout<<tic_tac_toe;
		
		} 
		while(game.game_over()==false);

		std::cout<<"Game Over \n";
		first_player = "";
		manager.save_game(game);

		int o,x,t;
		manager.get_winnter_totals(x,o,t);

		string choice ="";
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