/*
  Given a rectangular matrix containing only digits, calculate the number of different 2 × 2 squares in it.
  
  input:  matrix = [[1, 2, 1],
          [2, 2, 2],
          [2, 2, 2],
          [1, 2, 3],
          [2, 2, 1]]
  output: differentSquares(matrix) = 6
*/

int solution(vector<vector<int>> matrix) {
    set<vector<int>> res;
    int r = matrix.size();
    int c = matrix[0].size();
    
    if(r<2 || c < 2)
        return 0;
    vector<int> temp;
    for(int i = 0 ; i < r-1; i++){
        for(int j = 0; j < c-1; j++){
            for (int k = i; k <= i + 1; k++){
                for (int l = j; l <= j+1; l++){
                    temp.push_back(matrix[k][l]);
                }
            }
            res.insert(temp);
            temp.clear();
        }
    }
    return res.size();
}
