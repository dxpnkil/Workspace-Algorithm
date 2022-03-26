/*
  Given an integer n, return the largest number that contains exactly n digits.
  
  input:  n = 2
  output: solution(n) = 99
*/

int solution(int n) {
    return pow(10,n) - 1;
}
