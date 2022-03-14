/*
  You are implementing a command-line version of the Paint app. 
  Since the command line doesn't support colors, you are using different characters to represent pixels. 
  Your current goal is to support rectangle x1 y1 x2 y2 operation, which draws a rectangle that has an upper left corner at (x1, y1) and a lower right corner at (x2, y2). 
  Here the x-axis points from left to right, and the y-axis points from top to bottom.
  Given the initial canvas state and the array that represents the coordinates of the two corners, return the canvas state after the operation is applied.
  
  input:  canvas = [['a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'],
                    ['a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'],
                    ['a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'],
                    ['b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'],
                    ['b', 'b', 'b', 'b', 'b', 'b', 'b', 'b']]
          and rectangle = [1, 1, 4, 3]
  ouput:  solution(canvas, rectangle) = [['a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'],
                                        ['a', '*', '-', '-', '*', 'a', 'a', 'a'],
                                        ['a', '|', 'a', 'a', '|', 'a', 'a', 'a'],
                                        ['b', '*', '-', '-', '*', 'b', 'b', 'b'],
                                        ['b', 'b', 'b', 'b', 'b', 'b', 'b', 'b']]
*/

vector<vector<char>> solution(vector<vector<char>> canvas, vector<int> rectangle) {
    int y1 = rectangle[0], x1 = rectangle[1], y2 = rectangle[2], x2 = rectangle[3];
    canvas[x1][y1] = canvas[x1][y2] = canvas[x2][y1] = canvas[x2][y2] = '*';
    
    for (int i = x1 + 1; i < x2; ++i) {
        canvas[i][y1] = canvas[i][y2] = '|';
    }
    
    for (int i = y1 + 1; i < y2; ++i) {
        canvas[x1][i] = canvas[x2][i] = '-';      
    }
    
    return canvas;
}

