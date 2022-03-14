/*
  Find the number of ways to express n as sum of some (at least two) consecutive positive integers.
  
  input:  n = 9
  output: solution(n) = 2
  
  There are two ways to represent n = 9: 2 + 3 + 4 = 9 and 4 + 5 = 9
*/

int solution(int n) {
    int res = 0;
    for(int i = 1; i<= n; i++){
        for(int j=i+1; j<=n; j++){
            if(((i + j) * (j - i + 1) /2) == n)
                ++res;
        }
    }
    return res;
}
