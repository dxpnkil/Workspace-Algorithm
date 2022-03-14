/*
  Consider a bishop, a knight and a rook on an n × m chessboard. 
  They are said to form a triangle if each piece attacks exactly one other piece and is attacked by exactly one piece. 
  Calculate the number of ways to choose positions of the pieces to form a triangle.
  
  input:  n = 2 and m = 3
  ouput:  solution(n, m) = 8
*/
# solution: https://wachino.github.io/codefights/codefights-arcade/codefights-arcade-thecore/127_chessTriangle/README.html
# 2x3 there are 2 configurations possible, with reflections and rotations multiplying that by 4
# 2x4 there are an additional 2 configurations possible, with reflections and rotations multiplying that by 4
# 3x3 there are an additional 2 configurations possible up to rotations and reflection
# 3x4 there are an additional 2 configurations possible up to rotation and reflection

int ways(int n, int m, int x, int y) {
  if (n < x || m < y) 
    return 0;
  return (n - x + 1) * (m - y + 1);
}

int times(int n, int m, int x, int y) {
  return (ways(n, m, x, y) + ways(m, n, x, y)) * 8;
}

int solution(int n, int m) {
    return (times(n, m, 2, 3) + times(n, m, 3, 3) +
            times(n, m, 2, 4) + times(n, m, 3, 4) );
}

