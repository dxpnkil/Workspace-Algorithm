/*
  Let's define digit degree of some positive integer as the number of times 
  we need to replace this number with the sum of its digits until we get to a one digit number.

  Given an integer, find its digit degree.
  
  input:  n = 5
  output: digitDegree(n) = 0
*/


int digitDegree(int n) {
    int res = 0;
    while( n >= 10){
        int s = 0;
        while (n != 0) {
            s += n % 10;
            n /= 10;
        }
        n = s;
        ++res;
    }
    return res;
}
