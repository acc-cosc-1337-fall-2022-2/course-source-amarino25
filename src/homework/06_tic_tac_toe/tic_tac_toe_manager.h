//h
#include "tic_tac_toe.h"
#include <memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
class TicTacToeManager
{
    public:
    void save_game(std::unique_ptr<tic_tac_toe>& b);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_totals(int& o, int& x, int& t);

    private:
    std::vector<std::unique_ptr<tic_tac_toe>> games;
    int x_win=0;
    int o_win=0;
    int ties=0;

    void update_winner_count(std::string winner);
};
#endif
