/*
  Imagine a standard chess board with only two white and two black knights placed in their standard starting positions: 
      the white knights on b1 and g1; the black knights on b8 and g8.
  The players take turns in making moves, starting with the white player. 
  Given the configuration p of the knights after an unspecified number of moves, determine whose turn it is.
  
  input:  p = "b1;g1;b8;g8"
  output: p = "b1;g1;b8;g8"
*/

bool solution(string p) {
    return (p[0] + p[1] + p[3] + p[4] + p[6] + p[7] + p[9] + p[10]) % 2 == 0;
}

