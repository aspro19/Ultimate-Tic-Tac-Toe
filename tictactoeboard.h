#ifndef TICTACTOEBOARD_H
#define TICTACTOEBOARD_H

#include "cell.h"
#include "board.h"

#include <QObject>
#include <vector>


class TicTacToeBoard
{
signals:
    void highlight(int row, int col);

public:
    TicTacToeBoard(){}
    TicTacToeBoard(int row, int col);
    TicTacToeBoard clone();


    bool isFull();
    bool checkWon(int row, int col);
    void getEmptyCells(std::vector<Cell> &validCells);
    bool playCell(int row, int col, int player);
    bool playCellSilently(int row, int col, int player);

    void highlight_(int row, int col);

    bool operator!=(const TicTacToeBoard&);

    int row;
    int col;
    int winner = -99;

    Cell *cells[3][3];
};

#endif // TICTACTOEBOARD_H