//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::unique_ptr;
using std::vector;
using std::string;

void Tic_Tac_Toe_data::save_games(const std::vector<std::unique_ptr<tic_tac_toe>>& games)
{
    ofstream saved_games;

    saved_games.open(file_name);
    
    for(int i=0; i < games.size(); i++)
    { 
        for(int s = 0; s < games.at(i)->get_pegs().size(); s++)
        {
            saved_games<<games.at(i)->get_pegs().at(s);
        }
        saved_games<<games.at(i)->get_winner()<<"\n";
    }

    saved_games.close();
}


    std::vector<std::unique_ptr<tic_tac_toe>> Tic_Tac_Toe_data::get_games()
    {
        vector<unique_ptr<tic_tac_toe>>boards;

        ifstream file;
        file.open(file_name);

        if(file.is_open())
        {
            string line;
            while(getline(file,line))
            {
                vector<string>pegs;
                for(int ch = 0; ch<(line.length()-1); ch++)
                {
                    string peg = std::string(1,line.at(ch));
                    pegs.push_back(peg);
                }
                string winner;  
                winner = std::string(1,line.at(line.length()-1));

                unique_ptr<tic_tac_toe>board;

                if(pegs.size() ==9)
                {
                    board = std::make_unique<Tic_Tac_Toe_3>(move(pegs), winner);
                }
                else if(pegs.size()==16)
                {
                    board = std::make_unique<Tic_Tac_Toe_4>(move(pegs), winner);
                }
                boards.push_back(move(board));
            }
        }

        file.close();
        return boards;
    }