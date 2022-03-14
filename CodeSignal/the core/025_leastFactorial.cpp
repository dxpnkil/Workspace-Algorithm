/*
  Given an integer n, find the minimal k such that
    k = m! (where m! = 1 * 2 * ... * m) for some integer m;
    k >= n.
  
  input:  n = 17
  output: solution(n) = 24.
*/

int solution(int n) {
    int res = 1;
    for(int i = 1;i <= 100; i++){
        res *= i;
        if(res >= n)
            return res;
    }
}   
