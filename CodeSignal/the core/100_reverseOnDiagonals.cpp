/*
  The longest diagonals of a square matrix are defined as follows:
    the first longest diagonal goes from the top left corner to the bottom right one;
    the second longest diagonal goes from the top right corner to the bottom left one.
  Given a square matrix, your task is to reverse the order of elements on both of its longest diagonals.
  
  input:  matrix = [[1, 2, 3],
                    [4, 5, 6],
                    [7, 8, 9]]
  output: solution(matrix) = [[9, 2, 7],
                              [4, 5, 6],
                              [3, 8, 1]]
*/

vector<vector<int>> solution(vector<vector<int>> matrix) {
    int sz = matrix.size();
    for (int i = 0; i < sz/2; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[sz - i - 1][sz - i -1];
        matrix[sz - i - 1][sz - i -1] = temp;
    }
    
    for (int i = 0; i < sz/2; i++) {
        int temp = matrix[i][sz - 1 - i];
        matrix[i][sz - 1 - i] = matrix[sz - i - 1][i];
        matrix[sz - i - 1][i] = temp; 
    }
    
    return matrix;
}

 
