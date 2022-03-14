/*
  Given a rectangular matrix and integers a and b, consider the union of the ath row and the bth (both 0-based) column of the matrix.
  Return sum of all elements of that union.
  
  input:  matrix = [[1, 1, 1, 1], 
          [2, 2, 2, 2], 
          [3, 3, 3, 3]]
          a = 1, and b = 3
  output: solution(matrix, a, b) = 12
*/

int solution(vector<vector<int>> matrix, int a, int b) {
    int res = 0;
    for (int i = 0; i < matrix.size(); i++) {
        res += matrix[i][b];
    }
    
    for (int i = 0; i < matrix[0].size(); i++) {
        if (i == b)
            continue;
        res += matrix[a][i];
    }
    
    return res;
}


