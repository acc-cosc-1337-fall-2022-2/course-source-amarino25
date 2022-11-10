//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

void TicTacToeManager::save_game(tic_tac_toe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(int i=0; i < manager.games.size(); i++)
    {
        cout << manager.games[i] << "\n";
    }
}

void TicTacToeManager::get_winner_totals(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}
