#define MAX_NUM_PIECES 7
#define PIECE_SIZE 4

typedef struct{
    char name;
    char board[PIECE_SIZE][MAX_NUM_PIECES];
    int rows;
    int cols;
} Piece;