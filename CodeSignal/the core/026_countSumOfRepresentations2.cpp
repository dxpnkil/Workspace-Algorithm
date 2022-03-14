/*
  Given integers n, l and r, find the number of ways to represent n as a sum of two integers A and B such that l ≤ A ≤ B ≤ r.
  
  input:  n = 6, l = 2, and r = 4
  output: solution(n, l, r) = 2
*/

int solution(int n, int l, int r) {
    int half = n / 2;
    if (half > r || half < l)
        return 0;
    int res = min(half - l, r - half);
    if(n%2 == 0)
        return res + 1;
    else return res ;
}
