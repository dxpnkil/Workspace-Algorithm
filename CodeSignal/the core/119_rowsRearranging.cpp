/*
  Given a rectangular matrix of integers, 
  check if it is possible to rearrange its rows in such a way that all its columns become strictly increasing sequences (read from top to bottom).
  
  input:  matrix = [[2, 7, 1], 
                    [0, 2, 0], 
                    [1, 3, 1]]
  output: solution(matrix) = false
*/

bool solution(vector<vector<int>> matrix) {
    sort(matrix.begin(), matrix.end()); 
    for (int i = 0; i < matrix[0].size(); ++i) {
        for (int j = 0; j < matrix.size()-1; ++j) {
            if (matrix[j][i] >= matrix[j+1][i])
                return false;
        }
    }
    return true;
}

