#include "piece.h"
#include "position.h"
#include <vector>

using namespace std;

class Rook : public Piece {
    public:

    Rook(Position* position, Colour colour) : Piece(position, ROOK, colour) {

    }

    vector<Position*> canMoveTo();
};

vector<Position*> Rook::canMoveTo() {
    // similar to bishop, but sub in 0s
}