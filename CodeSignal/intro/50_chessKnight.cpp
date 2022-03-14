/*
  Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.
  
  input:  cell = "a1"
  output: chessKnight(cell) = 2
*/

int chessKnight(string cell) {
    
    int c = cell[0];
    int r = cell[1] - 48;
    
    if(r == 1 || r == 8){
        if( c == 97 || c == 104) return 2;
        else if (c == 98 || c == 103) return 3;
        else return 4;
    }
    else if(r == 2 || r == 7){
        if( c == 97 || c == 104) return 3;
        else if (c == 98 || c == 103) return 4;
        else return 6;
    }
    else {
        if( c == 97 || c == 104) return 4;
        else if (c == 98 || c == 103) return 6;
        else return 8;
    }
    

}
