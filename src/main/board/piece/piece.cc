#include "position.h"
#include "piece.h"

enum PieceType {
    // list them out later
};

enum Colour {
    White,
    Black
};

class Piece {
    Position* position;
    PieceType type;
    Colour colour;

    public:

    Piece(Position* position, PieceType type, Colour colour) {

    }

    ~Piece() {

    }

    // getters+setters?

    // requires: generating array of places where you can move

};

Piece::~Piece() {
    delete position;
}

Piece::Piece(Position* position, PieceType type, Colour colour): position(position), type(type), colour(colour) {

}