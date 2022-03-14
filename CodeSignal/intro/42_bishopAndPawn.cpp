/*
  Given the positions of a white bishop and a black pawn on the standard chess board, determine whether the bishop can capture the pawn in one move.
  The bishop has no restrictions in distance for each move, but is limited to diagonal movement.
  
  input:  bishop = "a1" and pawn = "c3"
  output: bishopAndPawn(bishop, pawn) = true
*/

bool bishopAndPawn(string bishop, string pawn) {
    return (abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1]) );
}
