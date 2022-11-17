//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>


using std::string;
using std::vector;
using std::cout;
using std::cin;

tic_tac_toe::tic_tac_toe(int size): pegs(size*size, " ")
{
}

bool tic_tac_toe::game_over()
{
    
    if(check_row_win())
    {
        set_winner();
        cout<<"Game Over, "<<winner<<" Wins";
        return true;
    }

    if(check_column_win())
    {
        set_winner();
        cout<<"Game Over, "<<winner<<" Wins\n";
        return true;
    }

    if(check_diagonal_win())
    {
        set_winner();
        cout<<"Game Over, "<<winner<<" Wins\n";
        return true;
    }

    if(check_board_full())
    {
        winner = "C";
        cout<<"Game Over, it's a tie!\n";
        return true;
    }
    
    return false;
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

std::string tic_tac_toe::get_winner()
{
    return winner;
}

bool tic_tac_toe::check_column_win()
{
    return false;
}

bool tic_tac_toe::check_row_win()
{
    return false;
}
    
bool tic_tac_toe::check_diagonal_win()
{
    return false;
}

void tic_tac_toe::set_winner()
{
    if(player =="X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
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

//friend
std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game)
{
    if (game.pegs.size() == 9)
    {
        out << game.pegs[0] << "|" << game.pegs[1] << "|" << game.pegs[2] << "\n"
        << "-----\n"
        << game.pegs[3] << "|" << game.pegs[4] << "|" << game.pegs[5] << "\n"
        << "-----\n"
        << game.pegs[6] << "|" << game.pegs[7] << "|" << game.pegs[8] << "\n";
    }
    else
    {
        out << game.pegs[0] << "|" << game.pegs[1] << "|" << game.pegs[2] << "|" << game.pegs[3] << "\n"
        << "-----\n"
        << game.pegs[4] << "|" << game.pegs[5] << "|" << game.pegs[6] << "|" << game.pegs[7] << "\n"
        << "-----\n"
        << game.pegs[8] << "|" << game.pegs[9] << "|" << game.pegs[10] << "|" << game.pegs[11] << "\n"
        << "-----\n"
        << game.pegs[12] << "|" << game.pegs[13] << "|" << game.pegs[14] << "|" << game.pegs[15] << "\n";
    }

    return out;
}

std::istream& operator>>(std::istream& in, tic_tac_toe& game)
{
    int position = 0;

    cout <<game.get_player()<<" turn. Enter a number from 1 " << game.pegs.size() << ":"; 
    in >> position;

    game.mark_board(position);

    cout << game;

    return in;
}