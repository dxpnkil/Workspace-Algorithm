/*
  Sudoku is a number-placement puzzle. The objective is to fill a 9 × 9 grid with digits so that each column, each row, 
  and each of the nine 3 × 3 sub-grids that compose the grid contains all of the digits from 1 to 9.
  This algorithm should check if the given grid of numbers represents a correct solution to Sudoku.
  
  input:  grid = [[1, 3, 2, 5, 4, 6, 9, 8, 7],
                  [4, 6, 5, 8, 7, 9, 3, 2, 1],
                  [7, 9, 8, 2, 1, 3, 6, 5, 4],
                  [9, 2, 1, 4, 3, 5, 8, 7, 6],
                  [3, 5, 4, 7, 6, 8, 2, 1, 9],
                  [6, 8, 7, 1, 9, 2, 5, 4, 3],
                  [5, 7, 6, 9, 8, 1, 4, 3, 2],
                  [2, 4, 3, 6, 5, 7, 1, 9, 8],
                  [8, 1, 9, 3, 2, 4, 7, 6, 5]]
  output: solution(grid) = true
*/

bool check(vector<int>& a){
    for (int i = 1; i <= 9; ++i) {
        if (find(a.begin(), a.end(), i) == a.end()) {
            return false;
        }
    }
    return true;
}

bool solution(vector<vector<int>> grid) {
    for (auto& v: grid) {
        if (!check(v)) 
            return false;
    }    

    for (int i = 0; i < grid.size(); ++i) {
        vector<int> test;
        for (int j = 0; j < grid.size(); ++j) 
            test.push_back(grid[j][i]);
        if (!check(test)) 
            return false;
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            vector<int> test;
            for (int r = i * 3; r < (i + 1) * 3; ++r) {
                for (int c = j * 3; c < (j + 1) * 3; ++c) {
                    test.push_back(grid[r][c]);
                }
            }
            if (!check(test)) 
                return false;
        }
    }
    
    return true;
}
