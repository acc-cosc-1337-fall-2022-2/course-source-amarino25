//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class Tic_Tac_Toe_3: public tic_tac_toe
{
    public:
    Tic_Tac_Toe_3();

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif 
