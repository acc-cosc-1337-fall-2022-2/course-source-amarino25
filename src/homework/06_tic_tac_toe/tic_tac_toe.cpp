//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>


using std::string;
using std::vector;
using std::cout;
using std::cin;

bool tic_tac_toe::game_over()
{
    return check_board_full();
}

void tic_tac_toe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void tic_tac_toe::mark_board(int position)
{
    pegs.at(position-1) = player;
    set_next_player();
}

std::string tic_tac_toe::get_player()const
{
    return player;
}

void tic_tac_toe:: display_board() const
{
    string output = "";
    output = pegs.at(0) + "|" + pegs.at(1) + "|" + pegs.at(2) + "\n"
           + pegs.at(3) + "|" + pegs.at(4) + "|" + pegs.at(5) + "\n"
           + pegs.at(6) + "|" + pegs.at(7) + "|" + pegs.at(8) + "\n";
               
    cout<<output;
}

void tic_tac_toe::set_next_player()
{
    if(player =="X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
}

bool tic_tac_toe::check_board_full()
{
    for(int pos = 0; pos < pegs.size(); pos++) {
        if ( pegs.at(pos) == " ")
        {
            return false;
        }
    }

    return true;
}
void tic_tac_toe::clear_board()
{
    pegs = {" "," "," "," "," "," "," "," "," "};
}