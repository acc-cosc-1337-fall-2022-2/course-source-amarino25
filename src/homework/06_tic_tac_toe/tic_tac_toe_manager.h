//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
#include <iostream>
#include<vector>
#include<string>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
class TicTacToeManager
{
    public:
    void save_game(std::unique_ptr<tic_tac_toe>& b);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_totals(int& o, int& x, int& t);
    TicTacToeManager() = default;
    TicTacToeManager(Tic_Tac_Toe_data & d);
    ~TicTacToeManager();
    

    private:
    std::vector<std::unique_ptr<tic_tac_toe>> games;
    int x_win=0;
    int o_win=0;
    int ties=0;

    Tic_Tac_Toe_data data;

    void update_winner_count(std::string winner);
};
#endif
