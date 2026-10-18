#ifndef POSITION_H
#define POSITION_H

enum MovementType {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    DIAGONAL_UP_RIGHT,
    DIAGONAL_UP_LEFT,
    DIAGONAL_DOWN_RIGHT,
    DIAGONAL_DOWN_LEFT,
    KNIGHT_JUMP
}; 

class Position {
    int row;
    int col;

    public:

    /**
     * @param row(int) Indicates the row of the position. Zero-indexed from 0 to 7 inclusive, 0 being White's back rank and 7 being Black's back rank
     * @param col(int) Indicates the column of the position. Zero-indexed from 0 to 7 inclusive, 0 being column A and 7 being column H 
     */
    Position(int row, int col);

    /**
     * @param horizontal(int) Indicates the number of squares the piece is moving horizontally. Negative is left and positive is right. Must be between -7 and 7
     * @param vertical(int) Indicates the number of squares the piece is moving vertically. Negative is down and positive is up, relative to white. Must be between -7 and 7
     * @return the resulting position from making the movement indicated by horizontal and vertical. An invalid position will be returned if
     * the resulting position would be off the board
     */
    Position* move(int horizontal, int vertical);

    /**
     * @return whether or not the position is a valid position
     */
    bool isValid();
};

#endif