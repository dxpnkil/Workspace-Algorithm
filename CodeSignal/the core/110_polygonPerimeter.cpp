/*
  You have a rectangular white board with some black cells. 
  The black cells create a connected black figure, i.e. it is possible to get from any black cell to any other one through connected adjacent (sharing a common side) black cells.
  Find the perimeter of the black figure assuming that a single cell has unit length.
  
  input:  matrix = [[false, true,  true ],
                    [true,  true,  false],
                    [true,  false, false]]
  output: solution(matrix) = 12
*/

int solution(vector<vector<bool>> matrix) {
    int s = 0;
    for(int i = 0; i < matrix.size(); ++i) {
        for(int j = 0; j < matrix[0].size(); ++j) {
            if (matrix[i][j]) {
                s += 4;
                if (i + 1 < matrix.size())
                    s -= 2 * matrix[i + 1][j];
                if (j + 1 < matrix[0].size())
                    s -= 2 * matrix[i][j + 1];
            }
        }
    }
    return s;
}

