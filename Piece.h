#ifndef PIECE_H
#define PIECE_H

enum class PieceType { Pawn, Knight, Bishop, Rook, Queen, King };
enum class Colour { Nothing, Black, White };

struct Piece {
    PieceType type;  // Type of Piece
    Colour colour;   // What colour is this piece (nothing if there is no piece)
    int previousMoves; // Has this piece moved before?
};

#endif
