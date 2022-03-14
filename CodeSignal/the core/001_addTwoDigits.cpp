/*
  You are given a two-digit integer n. Return the sum of its digits.
  
  input:  n = 29
  output: solution(n) = 11
*/

int solution(int n){
    int res = 0;
    while (n != 0 ){
        res += n%10;
        n /= 10;
    }
    return res;
}

  
