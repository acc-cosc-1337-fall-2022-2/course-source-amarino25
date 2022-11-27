//h
#include "tic_tac_toe.h"
#include<vector>
#include<memory>
#include<iostream>
#include<string>
#include<fstream>

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H


class Tic_Tac_Toe_data
{
    public:
    void save_games(const std::vector<std::unique_ptr<tic_tac_toe>>& games);
    std::vector<std::unique_ptr<tic_tac_toe>>get_games();

    private:
    std::string file_name{"savedgames.dat"};
    
};
#endif 