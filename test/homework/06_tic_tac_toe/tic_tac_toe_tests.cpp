#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test game over if nine slots selected")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(8);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="C");
}

TEST_CASE("Set first player to X")
{
	tic_tac_toe game;
	game.start_game("X");
	REQUIRE(game.get_player()=="X");
}

TEST_CASE("Set first player to O")
{
	tic_tac_toe game;
	game.start_game("O");
	REQUIRE(game.get_player()=="O");
}

TEST_CASE("Test first column winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(7);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test second column winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(8);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third column winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(9);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test first row winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(3);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test second row winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(4);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(6);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third row winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(7);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(9);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test top left diagonal winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(9);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test bottom left diagonal winner")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(3);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	game.game_over();
	REQUIRE(game.game_over()==false);
	game.mark_board(7);

	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test TicTacToe Manager get winner")
{
	
	tic_tac_toe game;
	TicTacToeManager manager;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);

	REQUIRE(game.game_over()==true);
	manager.save_game(game);


	
	game.start_game("O");

	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);

	REQUIRE(game.game_over()==true);
	manager.save_game(game);

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	

	REQUIRE(game.game_over()==true);
	manager.save_game(game);
	int x = 0;
	int o = 0;
	int t = 0;

	manager.get_winner_totals(o,x,t);
	REQUIRE(x==1);
	REQUIRE(o==1);
	REQUIRE(t==1);
}
