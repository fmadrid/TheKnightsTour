// TO-DO: Complete the definitions of all functions other than main
#include <iostream>     // std::cout

typedef unsigned int MoveType, uint;  // MoveType is aliased as data type unsigned int (i.e. MoveType variables are unsigned int variables)
									  // uint is also aliased as unsigned int (I got tired of typing unsigned int over and over :p )

typedef unsigned int ChessBoard[8][8];

typedef struct Position {
	uint currentRow;
	uint currentCol;
} Position;

// Change in horizontal position and vertical position for each MoveType as an index. For example, MoveType = 0 implies left 1 and up 2
const static int horizontalMove[8]{ -1,1,2,2,1,-1,-2,-2 };
const static int verticalMove[8]{ -2,-2, -1,1,2,2,1,-1 };

// Function Prototypes (You can change these if you know what you are doing) but these functions are really useful for this project
void promptMove(MoveType&);
void printBoard(const ChessBoard);
void performMove(ChessBoard, const MoveType, const Position&, uint&);
bool isValidMove(const ChessBoard, const MoveType, uint, uint);
bool isFinished(const ChessBoard, const Position&, uint);

// This function is done
int main() {
	ChessBoard board{}; // Initialize the chessboard with all 0 values
	Position pos{ 4,4 };
	uint moveCount{ 1 };

	// 1. Place the knight somewhere on the chessboard (either a random or predetermined space)
	pos = { 4,4 };

	board[pos.currentRow][pos.currentCol] = moveCount; // Indicates that the knight has visited the space
	do {
		printBoard(board); // 2. Print the chessboard to the console.

		// 3. Prompt the user to enter one of the 8 possible moves
		MoveType move;
		
		// 4. Confirms validity of the move
		do {move = promptMove();}
		while (!isValidMove(board, pos, move));

		// 5. Perform the move
		performMove(board, move, pos, moveCount);

	} while (!isFinished(board, pos, moveCount)); // 6. Repeat Steps 2-5 until either the entire chessboard has been traversed, or 
												  //    there are no valid moves remaining
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Function isFinished
// Prompts the user to enter a value corresponding to a move and validates the input
////////////////////////////////////////////////////////////////////////////////////////////////
MoveType promptMove() {
	// 1. Prompt the user to enter an integer from 0 to 7
	// 2. Validate the move (Hint: unsigned integers are already greater than 0)
	// 3. If valid, update the move, otherwise repeat steps 1-3.
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Function printBoard
// Iterate through the Chessboard, printing the contents of each cell
////////////////////////////////////////////////////////////////////////////////////////////////
void printBoard(const ChessBoard board) {
	// Chessboard is a 2D array
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Function isValidMove
// Given the current state of the chessboard, determine if the the prposed move from the
// current knight's position results in a valid position (i.e. still on the board)
////////////////////////////////////////////////////////////////////////////////////////////////
bool isValidMove(const ChessBoard board, const Position& p, const MoveType m) {
	// If the move puts the knight outside of the board or onto a previously traversed space, return false; otherwise, return true

	// Check if the proposed move moves the knight off the board

	// Check if the knight has moved to the proposed move

	return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Function performMove
// Updates the state of the chessboard by taking the proposed move and the knight's current
// position to find the new position of the knight.
////////////////////////////////////////////////////////////////////////////////////////////////
void performMove(ChessBoard board, const MoveType m, const Position& p, uint& count) {
	
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Function isFinished
// This function determines if we have finished the puzzle by checking to see if there are no 
// available moves (the knight has visited all locations we can possibly move to) or if all 64
// squares have been visited.
////////////////////////////////////////////////////////////////////////////////////////////////
bool isFinished(const ChessBoard board, const Position& p, uint moveCount) {

	// Check if all 64 squares have been visited

	// Check all possibles moves, if any are valid then we are not done

	return true;
}
