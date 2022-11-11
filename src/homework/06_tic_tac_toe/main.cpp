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
	TicTacToeManager manager;
	string first_player;
	bool loop_again = true;
	int position;
	
	

	while (loop_again)
	{
		do
		{
			cout << "Enter X or O:";
			cin >> first_player;
		}
		while (first_player!="X" && first_player!="O");
		
		game.start_game(first_player);
		
		do
		{			
			cin >> game;		
		} 
		while (game.game_over() == false);
		
		manager.save_game(game);

		int o,x,t;
		manager.get_winner_totals(o,x,t);

		cout << "X wins: " << x << " | O wins: " << o << " | Ties: " << t << "\n";

		string choice ="";
		do
		{
		cout << "Play again(Y for yes N for no)";
		cin >> choice;		
		loop_again = choice == "Y";
		}
		while (choice!= "Y"&&choice!="N");
	}
	
	cout << "Final game history\n" << manager;

	return 0;
	
	
}