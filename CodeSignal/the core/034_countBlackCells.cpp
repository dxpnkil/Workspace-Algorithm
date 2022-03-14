/*
  Imagine a white rectangular grid of n rows and m columns divided into two parts by a diagonal line running from the upper left to the lower right corner. 
  Now let's paint the grid in two colors according to the following rules:

  A cell is painted black if it has at least one point in common with the diagonal;
  Otherwise, a cell is painted white.
  Count the number of cells painted black.
  || Solution: http://www.cut-the-knot.org/Curriculum/Geometry/LineThroughGrid.shtml#solution
  
  input:  n = 3 and m = 4
  output: solution(n, m) = 6
*/

int gcd(int n, int m){
    while (m) {
        int temp = n;
        n = m;
        m = temp%m;
    }
    return n;
}
int solution(int n, int m) {
    if (n == 1 or m==1 ) 
        return n * m;
    if (n == m) 
        return n + 2*(n-1);
    return n + m - gcd(n, m) + (gcd(n, m)-1)*2;
}
