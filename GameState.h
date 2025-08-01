#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "Board.h"
#include "Setup.h"

class GameState {
    Board *currBoard;
    std::vector<std::vector<Info>> history;
    int currTurn;
    Colour playerTurn;
    std::vector<std::vector<int>> move_history;

    public:
    int player1IsBot; //0 implies human plyer, otherwise implies level of bot
    int player2IsBot;
    void init(std::string startup, int n, int p1bot, int p2bot, Colour colour, bool enableBonus = false); //intializes game
    void switchTurn(); //switches turn
    bool move(int r1, int c1, int r2, int c2); //calls the move function on the board, first makes sure that this peice is colour of player who called for it
    char hasWon(); //returns the character w,b,s,n for who is winning in the current boardstate (w for white, b for black, s for stalemate, n for neither)
    void rewind(int turns); //rewinds the game by amount of turns
    void printBoard(); //prints the board
    Board* getBoard();
    void setPlayerTurn(Colour colour);
    void promotion(PieceType p);
    Colour getPlayerTurn();
    GameState();
}
;

#endif
