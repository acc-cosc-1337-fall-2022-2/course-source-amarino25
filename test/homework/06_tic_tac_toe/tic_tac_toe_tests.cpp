#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test game over if nine slots selected")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
}

TEST_CASE("Set first player to X")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");
	REQUIRE(game->get_player()=="X");
}

TEST_CASE("Set first player to O")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
}

TEST_CASE("Test first column winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second column winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test third column winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test first row winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test second row winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test third row winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test top left diagonal winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test bottom left diagonal winner")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_3>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test TicTacToe Manager get winner")
{
	
	std::unique_ptr<tic_tac_toe> game1 = std::make_unique<Tic_Tac_Toe_3>();
	TicTacToeManager manager;
	game1->start_game("X");

	game1->mark_board(3);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(1);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(6);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(2);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(9);

	REQUIRE(game1->game_over()==true);
	manager.save_game(game1);
	
	std::unique_ptr<tic_tac_toe> game2 = std::make_unique<Tic_Tac_Toe_3>();

	game2->start_game("O");

	game2->mark_board(1);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(4);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(3);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(9);

	REQUIRE(game2->game_over()==true);
	manager.save_game(game2);

	std::unique_ptr<tic_tac_toe> game3 = std::make_unique<Tic_Tac_Toe_3>();

	game3->start_game("X");

	game3->mark_board(1);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(2);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(3);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(4);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(5);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(7);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(6);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(9);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(8);
	

	REQUIRE(game3->game_over()==true);
	manager.save_game(game3);
	int x = 0;
	int o = 0;
	int t = 0;

	manager.get_winner_totals(o,x,t);
	REQUIRE(x==1);
	REQUIRE(o==1);
	REQUIRE(t==1);
}

TEST_CASE("Test first column winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second column winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test third column winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test fourth column winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test first row winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test second row winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test third row winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test fourth row winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test top left diagonal winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test bottom left diagonal winner for TT4")
{
	std::unique_ptr<tic_tac_toe> game = std::make_unique<Tic_Tac_Toe_4>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);

	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}