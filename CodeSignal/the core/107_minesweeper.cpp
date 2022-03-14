/*
  In the popular Minesweeper game you have a board with some mines and those cells 
  that don't contain a mine have a number in it that indicates the total number of mines in the neighboring cells. 
  Starting off with some arrangement of mines we want to create a Minesweeper game setup.
  
  input:  matrix = [[true, false, false],
          [false, true, false],
          [false, false, false]]
  output: minesweeper(matrix) = [[1, 2, 1],
                                 [2, 1, 1],
                                 [1, 1, 1]]
  */
  
vector<vector<int>> solution(vector<vector<bool>> matrix) {
    vector<vector<int>> res;
    int r = matrix.size();
    int co = matrix[0].size();
    for (int i = 0; i < r; i++) {
        vector<int> row;
        for (int j = 0; j < co; j++) {
            int count = 0;
            for (int a = -1; a <= 1; a++) {
                for (int b = -1; b <= 1; b++) {
                    int c = a + i, d = b + j;
                    if (c == i && d == j) {
                    continue;
                    }
                    if (0 <= c && c < r && 0 <= d && d < co) {
                    count += matrix[c][d] ? 1 : 0;
                    }
                }
            }
            row.push_back(count);
        }
      res.push_back(row);
    }
    return res;
}
