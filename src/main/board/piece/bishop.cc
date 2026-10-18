#include "piece.h"
#include "position.h"
#include <cmath>
#include <vector>

using namespace std;

class Bishop : public Piece {
    public:

    Bishop(Position* position, Colour colour) : Piece(position, BISHOP, colour) {
    }

    vector<Position*> canMoveTo();
};

vector<Position*> Bishop::canMoveTo() {
    vector<Position*> canMoveToPositions = vector<Position*>();

    for (int i = 1; i < 8; i++) {
        Position* moveUpRight = this->position->move(i, i);
        Position* moveUpLeft = this->position->move(-i, i);
        Position* moveDownRight = this->position->move(i, -i);
        Position* moveDownLeft = this->position->move(-i, -i);

        if (moveUpRight->isValid()) {
            canMoveToPositions.push_back(moveUpRight);
        } else {
            delete moveUpRight;
        }

        if (moveUpLeft->isValid()) {
            canMoveToPositions.push_back(moveUpLeft);
        } else {
            delete moveUpLeft;
        }

        if (moveDownRight->isValid()) {
            canMoveToPositions.push_back(moveDownRight);
        } else {
            delete moveDownRight;
        }

        if (moveDownLeft->isValid()) {
            canMoveToPositions.push_back(moveDownLeft);
        } else {
            delete moveDownLeft;
        }

    }

    return canMoveToPositions;
}

