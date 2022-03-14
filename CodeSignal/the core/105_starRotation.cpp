/*
  Consider a (2k+1) × (2k+1) square subarray of an integer integers matrix. 
  Let's call the union of the square's two longest diagonals, middle column and middle row a star. 
  Given the coordinates of the star's center in the matrix and its width, 
  rotate it 45 · t degrees clockwise preserving position of all matrix elements that do not belong to the star.
  
  input:  matrix = [[1, 0, 0, 2, 0, 0, 3],
                    [0, 1, 0, 2, 0, 3, 0],
                    [0, 0, 1, 2, 3, 0, 0],
                    [8, 8, 8, 9, 4, 4, 4],
                    [0, 0, 7, 6, 5, 0, 0],
                    [0, 7, 0, 6, 0, 5, 0],
                    [7, 0, 0, 6, 0, 0, 5]]
          width = 7, center = [3, 3], and t = 1
  ouput:  solution(matrix, width, center, t) = [[8, 0, 0, 1, 0, 0, 2],
                                                [0, 8, 0, 1, 0, 2, 0],
                                                [0, 0, 8, 1, 2, 0, 0],
                                                [7, 7, 7, 9, 3, 3, 3],
                                                [0, 0, 6, 5, 4, 0, 0],
                                                [0, 6, 0, 5, 0, 4, 0],
                                                [6, 0, 0, 5, 0, 0, 4]]
*/

vector<vector<int>> solution(vector<vector<int>> matrix, int width, vector<int> center, int t) {
    const int posX[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    const int posY[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    auto res = matrix;
    
    for(int i = ((width - 1) / 2); i > 0; i--) {
        for(int j = 0; j < 8; j++){
            int move = (j + t) % 8;
            res[posY[move] * i + center[0]][posX[move] * i + center[1]] = matrix[posY[j] * i + center[0]][posX[j] * i + center[1]];
        }
    }
    return res;
}

