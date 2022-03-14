/*
  You're given two integers, n and m. Find position of the rightmost pair of equal bits in their binary representations 
  (it is guaranteed that such a pair exists), counting from right to left.
  Return the value of 2position_of_the_found_pair
  
  input: n = 10 and m = 11
  output: solution(n, m) = 2
*/

int solution(int n, int m) {
  return (n ^ ~m) & (~(n^ ~m) +1) ;
}


