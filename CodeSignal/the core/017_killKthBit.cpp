/*
  You figured out that some numbers have a modified single digit in their binary representation. 
  More specifically, in the given number n the kth bit from the right was initially set to 0, but its current value might be different. 
  It's now up to you to write a function that will change the kth bit of n back to 0.
  
  input:  n = 37 and k = 3
  output: solution(n, k) = 33
  3710 = 1001012 ~> 1000012 = 3310
*/

int solution(int n, int k) {
  return n & ~(1 << (k - 1));
}


