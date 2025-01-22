//1st Subsmission:
/*
    1. Main Menu. 
        1.1. Show the main menu with all menu options (see Figure 1). checked
        1.2. Get the player option.                                   checked
        1.3.    If applicable, run the functionality chosen in step 1.2. In case the chosen option is Exit, the player will
                leave the application                                
        1.4. Otherwise, go back to step 1.
    2. Pieces
        2.1.    Declare the Piece data structure in pieces.h, with a name (character), a board (4×4 array of characters),
                and two integers rows and cols.
        2.2. Implement in pieces.c the functionalities:
            3.2.1.  void init_piece(Piece *p);, initializes the board characters to '.' of a given piece, and its rows and cols to 0.
            3.2.2.  Piece make_O();, Piece make_I();, Piece make_S();, Piece make_Z();, Piece make_L();,
                    Piece make_J(); and Piece make_T(); are functions to make specific instance shapes (i.e., they
                    should properly fill the name, board, rows and cols of each sort of piece).
    3. New Game
        3.1. Declare the macros MAX ROWS ∈ [10, 15] and MAX COLUMNS ∈ [6, 12], in game.h file
        3.2. Implement in game.c the functionalities:
            3.2.1.  void init_game_state(GameState *game_state);, set the score to 0, initializes all characters of
                    board with '.' characters, and calls get new random piece function to add a new piece in the spawn
                    area.
            3.2.2.  bool is_terminal(char board[MAX_ROWS][MAX_COLUMNS]);, returns true if there is an 'X' (i.e.,
                    blocked cell) in the top-4 rows (i.e., rows ∈ [0, 3]).
            3.2.3.  void move(char board[MAX_ROWS][MAX_COLUMNS], PieceInfo *piece_info, int option);, should
                    the at col in piece info, either left or right if the movement is free of collisions.
            3.2.4.  void rotate(char board[MAX_ROWS][MAX_COLUMNS], PieceInfo *piece_info, int option); should
                    call the rotating functions for the Piece in piece info, either clockwise or counter clockwise, if the
                    rotation is free of collisions.
        
    4. Rotation
            4.1 void rotate_clockwise(Piece *p); and void rotate_counter_clockwise(Piece *p);, rotate
                clockwise or counter clockwise the board of a given piece, and swaps its rows and cols variables
    5. Move & None
    6. Quit Game
*/

#include <stdio.h>

int MainMenu() {
    int option = 1; // Arbitrary value to enter the loop
    printf("Menu options:\n");
    printf("1. New game.\n");
    printf("2. Save game.\n");
    printf("3. Load game.\n");
    printf("4. Resume game.\n");
    printf("5. Exit.\n");
    printf("Enter an integer (1-5): ");
    while(0>option || option>=6){   //Loop to ensure a valid number is inputted
        scanf("%i", option);
    }
        
}

int main(){
    int option = MainMenu();
    while(option != 5); // Loop to check that the player didn't exit
        switch(option){
        case 1:
            
            break;
        
        default:
            break;
        }
        return 0;
}