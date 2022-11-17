//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class Tic_Tac_Toe_4: public tic_tac_toe
{
    public:
    Tic_Tac_Toe_4();

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif 
