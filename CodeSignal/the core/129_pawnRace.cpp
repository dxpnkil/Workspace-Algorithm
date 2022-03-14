/*
  Pawn race is a game for two people, played on an ordinary 8 × 8 chessboard. The first player has a white pawn, the second one - a black pawn. 
  Initially the pawns are placed somewhere on the board so that the 1st and the 8th rows are not occupied. Players take turns to make a move.
  The purpose of the game is to reach the the 1st row (for the black pawn) or the 8th row (for the white one), or to capture the opponent's pawn.
  Given the initial positions and whose turn it is, determine who will win or declare it a draw (i.e. it is impossible for any player to win). 
  Assume that the players play optimally.
  
  input:  white = "e2", black = "e7", and toMove = 'w'
  output: white = "e2", black = "e7", and toMove = 'w'
*/

string solution(string white, string black, char toMove) {
    int w = ('8' - white[1]) - (white[1] == '2');
    int b = (black[1] - '1') - (black[1] == '7');
    
    if (white[0] == black[0]) {
        if (white[1] < black[1])
            return "draw";
        return w == b ? (toMove == 'w' ? "white" : "black") 
                    : (w < b ? "white" : "black");
    }
    
    if (abs(white[0] - black[0]) == 1 && black[1] - white[1] > 0) {
        int bw = black[1] - white[1];
        
        if (bw == 1 || bw == 3 || bw == 4) 
            return toMove == 'w' ? "white" : "black";
        else return toMove == 'w' ? "black" : "white";
    }
    return w == b ? (toMove == 'w' ? "white" : "black") 
                    : (w < b ? "white" : "black");
}
