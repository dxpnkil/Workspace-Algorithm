/*
  Determine if the given number is a power of some non-negative integer.
  
  input:  n = 125
  output: solution(n) = true
*/

bool solution(int n) {
    if( n == 1)
        return true;
    for(int i = 2; i<=30;  i++){
        int test = i * i;
        while (test <= n) {
            if (test == n) 
                return true;  
            test *= i;
        }
    }
    return false;
}
