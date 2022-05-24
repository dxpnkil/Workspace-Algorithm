/*
    Given matrix, a rectangular matrix of integers, where each value represents the cost of the room, your task is
    to return the total sum of all rooms that are suitable for the CodeBots (ie: add up all the values that don't appear below a 0)
    
    input:  matrix = [[0, 1, 1, 2], 
          [0, 5, 0, 0], 
          [2, 0, 3, 3]]
    output: matrixElementsSum(matrix) = 9
    There are several haunted rooms, so we'll disregard them as well as any rooms beneath them. Thus, the answer is 1 + 5 + 1 + 2 = 9
*/
    
int matrixElementsSum(vector<vector<int>> matrix) {
    int row = matrix.size();
    int column = matrix[0].size();
    int res = 0;
    for( int i = 0; i<column; i++){
        for(int j =0; j<row; j++){
            if (matrix[j][i] != 0){
                res += matrix[j][i];
            else break;
        }
    }
    return res;
}
