/*
  Given the total number of rows and columns in the theater (nRows and nCols, respectively), 
    and the row and column you're sitting in, 
  return the number of people who sit strictly behind you and in your column or to the left, assuming all seats are occupied.
  
  input:  nCols = 16, nRows = 11, col = 5, and row = 3
  output: solution(nCols, nRows, col, row) = 96
*/

int solution(int nCols, int nRows, int col, int row) {
    return (nCols - col + 1) * (nRows - row);
}
