#include "pieces.h"

void init_piece(Piece *p){
	for(int c = 0; c <= PIECE_SIZE; c++){
        for(int r = 0; r <= PIECE_SIZE; r++){
            p->board[c][r] = '.';
        }
    }
    p->cols = 0;
    p->rows = 0;
}

void print_piece(Piece p){
    printf("Name: %c; Size: %dx%d\n", p.name, p.rows, p.cols);
    for(int i=0; i<PIECE_SIZE; ++i){
        for(int j=0; j<PIECE_SIZE; ++j){
            printf("%c", p.board[i][j]);
        }
        printf("\n");
    }
}

void rotate_clockwise(Piece *p) {
    Piece temp;
    init_piece(&temp);
    temp.rows = p->cols;
    temp.cols = p->rows;
    temp.name = p->name;

    for (int r = 0; r < p->rows; r++) {
        for (int c = 0; c < p->cols; c++) {
            temp.board[c][p->rows - 1 - r] = p->board[r][c];
        }
    }
    
    *p = temp;  // Copy temp back to p
}

void rotate_counter_clockwise(Piece *p) {
    Piece temp;
    init_piece(&temp);
    temp.rows = p->cols;
    temp.cols = p->rows;
    temp.name = p->name;

    for (int r = 0; r < p->rows; r++) {
        for (int c = 0; c < p->cols; c++) {
            temp.board[p->cols - 1 - c][r] = p->board[r][c];
        }
    }
    
    *p = temp;  // Copy temp back to p
}

Piece make_O(){
    Piece piece;
    init_piece(&piece);
    piece.name = 'O'; piece.rows = piece.cols = 2;
    piece.board[0][0] = '0'; piece.board[0][1] = '0';
    piece.board[1][0] = '0'; piece.board[1][1] = '0';
    return piece;
}

Piece make_I(){
    Piece piece;
    init_piece(&piece); piece.rows =4; piece.cols = 1;
    piece.name = 'I'; piece.board[0][0] = '0'; piece.board[0][1] = '0';
    piece.board[0][2] = '0'; piece.board[0][3] = '0';
    return piece;    
}


Piece make_S(){
    Piece piece;
    init_piece(&piece); piece.rows =2; piece.cols = 3;
    piece.name = 'S'; piece.board[0][0] = '0'; piece.board[1][0] = '0';
    piece.board[1][1] = '0'; piece.board[2][1] = '0';
    return piece; 
}


Piece make_Z(){
    Piece piece;
    init_piece(&piece); piece.rows =2; piece.cols = 3;
    piece.name = 'Z'; piece.board[0][1] = '0'; piece.board[1][1] = '0';
    piece.board[1][0] = '0'; piece.board[2][0] = '0';
    return piece; 
}

Piece make_L(){
    Piece piece;
    init_piece(&piece); piece.rows = 3; piece.cols = 2;
    piece.name = 'L'; piece.board[0][0] = '0'; piece.board[0][1] = '0';
    piece.board[0][2] = '0'; piece.board[1][0] = '0';
    return piece; 
}

Piece make_J(){
    Piece piece;
    init_piece(&piece); piece.rows = 3; piece.cols = 2;
    piece.name = 'J'; piece.board[0][0] = '0'; piece.board[1][0] = '0';
    piece.board[1][1] = '0'; piece.board[1][2] = '0';
    return piece; 
}

Piece make_T(){
    Piece piece;
    init_piece(&piece); piece.rows = 2; piece.cols = 3;
    piece.name = 'T'; piece.board[0][1] = '0'; piece.board[1][1] = '0';
    piece.board[1][0] = '0'; piece.board[2][1] = '0';
    return piece; 
}

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
