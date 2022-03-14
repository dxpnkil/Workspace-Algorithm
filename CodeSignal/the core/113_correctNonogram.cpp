/*
  You are given a square nonogram of size size. 
  Its grid is given as a square matrix nonogramField of size (size + 1) / 2 + size, 
    where the first (size + 1) / 2 cells of each row and and each column define the numbers for the corresponding row/column, 
    and the rest size × size cells define the the grid itself.
  Determine if the given nonogram has been solved correctly.
  
  input:  size = 5 and
      nonogramField = [["-", "-", "-", "-", "-", "-", "-", "-"],
                       ["-", "-", "-", "2", "2", "1", "-", "1"],
                       ["-", "-", "-", "2", "1", "1", "3", "3"],
                       ["-", "3", "1", "#", "#", "#", ".", "#"],
                       ["-", "-", "2", "#", "#", ".", ".", "."],
                       ["-", "-", "2", ".", ".", ".", "#", "#"],
                       ["-", "1", "2", "#", ".", ".", "#", "#"],
                       ["-", "-", "5", "#", "#", "#", "#", "#"]]
  output: solution(size, nonogramField) = true
*/

bool solution(int size, vector<vector<string>> nonogramField) {
    int n = nonogramField.size();
    
    for (int i = 0; i < n; ++i) {
        if (i < n - size)
            continue;
        vector<int> row, rowFill, col, colFill;
        for (int j = 0; j < n; j++) {
            if (j < n - size || i < n - size) {
                if (nonogramField[i][j] != "-")
                    row.push_back(stoi(nonogramField[i][j]));
                    
                if (nonogramField[j][i] != "-")
                    col.push_back(stoi(nonogramField[j][i]));
            } else {
                if (nonogramField[i][j] == "#") {
                    if (nonogramField[i][j-1] == "#")
                        rowFill.back()++;
                    else rowFill.push_back(1);
                }
                
                if (nonogramField[j][i] == "#") {
                    if (nonogramField[j-1][i] == "#")
                        colFill.back()++;
                    else colFill.push_back(1);
                }
            }
        }
        
        if (row != rowFill || col != colFill)
            return false;
    }
    return true;
}
