/*
  Given two cells on the standard chess board, determine whether they have the same color or not.
  
  input:  cell1 = "A1" and cell2 = "C3"
  output: chessBoardCellColor(cell1, cell2) = true
*/

bool chessBoardCellColor(string cell1, string cell2) {
    bool c1 = ( (cell1[0]%2 == 0) == cell1[1]%2 == 0);
    bool c2 = ( (cell2[0]%2 == 0) == cell2[1]%2 == 0);
    
    return(c1 == c2);
}
