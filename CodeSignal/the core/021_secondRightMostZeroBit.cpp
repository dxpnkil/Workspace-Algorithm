/*
  Presented with the integer n, find the 0-based position of the second rightmost zero bit in its binary representation 
  (it is guaranteed that such a bit exists), counting from right to left.
  Return the value of 2position_of_the_found_bit.
  
  input:  n = 37
  output: solution(n) = 8  
*/

int solution(int n) {
  return (~n) & ( (n | ( n + 1 )) + 1);
}
