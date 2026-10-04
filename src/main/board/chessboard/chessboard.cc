#include "piece.h"
#include <vector>

using namespace std;

class ChessBoard {
    vector<Piece*> pieces;
    
    ChessBoard() {

    }

    ChessBoard(vector<Piece*> pieces) {

    }

    ~ChessBoard() {

    }

    // other methods: generating legal moves for different sides
    // we will need turn by turn play
};

ChessBoard::ChessBoard() {
    // initialize the default chessboard with all pieces at their default positions
}

ChessBoard::ChessBoard(vector<Piece*> pieces) : pieces(pieces) {
    // initialize chessboard with a custom setup
}

ChessBoard::~ChessBoard() {
    vector<Piece*>::iterator it;
    for (it = pieces.begin(); it != pieces.end(); it++) {
        delete *it;
    }
}

