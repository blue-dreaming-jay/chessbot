#ifndef PIECE_H
#define PIECE_H

#include "position.h"

enum PieceType {
    BISHOP,
    ROOK
    // list them out later
};

enum Colour {
    White,
    Black
};
class Piece {
    protected: 

    Position* position;
    PieceType type;
    Colour colour;

    public:

    /**
     * @param position(Position*) Indicates what position the piece is at currently.
     * @param type(PieceType) Indicates what type the piece is (bishop, rook, queen, etc)
     * @param colour(Colour) Indicates if the piece is black or white
     */
    Piece(Position* position, PieceType type, Colour colour) {

    }

    ~Piece() {

    }

    virtual void moveTo(Position* position) = 0;
    // getters+setters?

    // requires: generating array of places where you can move

};
#endif