//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class Tic_Tac_Toe_3: public tic_tac_toe
{
    public:
    Tic_Tac_Toe_3();
    Tic_Tac_Toe_3(std::vector<std::string> b, std::string winner):tic_tac_toe(b, winner){};

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif 
