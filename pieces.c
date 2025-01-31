#include "pieces.h"

// Initializes the board characters to '.' of a given piece , and its rows and cols to 0.
void init_piece(Piece *p) {
    Piece piece = {"."};
    piece.board[0][0];
}

void rotate_clockwise(Piece *p){
    int aux = (*p).rows;
    (*p).rows = (*p).cols;
    (*p).cols = aux;
}