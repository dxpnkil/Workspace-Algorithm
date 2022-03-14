/*
  In ChessLand there is a small but proud chess bishop with a recurring dream. 
  In the dream the bishop finds itself on an n × m chessboard with mirrors along each edge, and it is not a bishop but a ray of light. 
  This ray of light moves only along diagonals, it never stops, and once it reaches an edge or a corner of the chessboard it reflects from it and moves on.
  
  Given the initial position and the direction of the ray, 
  find its position after k steps where a step means either moving from one cell to the neighboring one or reflecting from a corner of the board.
  
  input:  boardSize = [3, 7], initPosition = [1, 2], initDirection = [-1, 1], and k = 13
  output: solution(boardSize, initPosition, initDirection, k) = [0, 1]
*/

vector<int> solution(vector<int> boardSize, vector<int> initPosition, vector<int> initDirection, int k) {
    initPosition[0] = (initPosition[0] + initDirection[0]*k) % (boardSize[0]*2);
    if (initPosition[0] < 0) 
        initPosition[0] += boardSize[0]*2;
    if (initPosition[0] >= boardSize[0]) 
        initPosition[0] = boardSize[0]*2 - 1 - initPosition[0];
    
    initPosition[1] = (initPosition[1] + initDirection[1]*k) % (boardSize[1]*2);
    if (initPosition[1] < 0) 
        initPosition[1] += boardSize[1]*2;
    if (initPosition[1] >= boardSize[1]) 
        initPosition[1] = boardSize[1]*2 - 1 - initPosition[1];
    
    return initPosition;
}
