//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class Tic_Tac_Toe_4: public tic_tac_toe
{
    public:
    Tic_Tac_Toe_4();
    Tic_Tac_Toe_4(std::vector<std::string>b, std::string winner): tic_tac_toe(b, winner){};

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif 
