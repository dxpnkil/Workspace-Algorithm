/*
  Given a rectangular matrix and an integer column, return an array containing the elements of the columnth column of the given matrix 
  
  input:  matrix = [[1, 1, 1, 2], 
                    [0, 5, 0, 4], 
                    [2, 1, 3, 6]]
  output: solution(matrix, column) = [1, 0, 3]
*/

vector<int> solution(vector<vector<int>> matrix, int column) {
    vector <int> res;
    for (int i = 0; i < matrix.size(); i++){
        res.push_back(matrix[i][column]);
    }
    return res;
}
