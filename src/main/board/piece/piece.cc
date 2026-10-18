#include "position.h"
#include "piece.h"
#include <vector>

using namespace std;

enum PieceType {
    BISHOP,
    ROOK
    // list them out later
};

enum Colour {
    WHITE,
    BLACK
};

class Piece {
    protected: 

    Position* position;
    PieceType type;
    Colour colour;

    public:

    Piece(Position* position, PieceType type, Colour colour) {

    }

    ~Piece() {

    }

    void moveTo(Position* position);

    virtual vector<Position*> canMoveTo() = 0;

    // getters+setters?

    // requires: method for generating array of places where you can move
    // depends on the type

};

Piece::~Piece() {
    delete position;
}

Piece::Piece(Position* position, PieceType type, Colour colour): position(position), type(type), colour(colour) {

}

void Piece::moveTo(Position* position) {
    Position* oldPosition = this->position;
    this->position = position;
    delete oldPosition;
}