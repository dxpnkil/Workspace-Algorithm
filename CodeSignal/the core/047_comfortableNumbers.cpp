/*
  Let's say that number a feels comfortable with number b if a ≠ b and b lies in the segment [a - s(a), a + s(a)], where s(x) is the sum of x's digits.
  How many pairs (a, b) are there, such that a < b, both a and b lie on the segment [l, r], 
  and each number feels comfortable with the other (so a feels comfortable with b and b feels comfortable with a)?
  
  input:  l = 10 and r = 12
  output: solution(l, r) = 2
  
  Here are all values of s(x) to consider:
    s(10) = 1, so 10 is comfortable with 9 and 11;
    s(11) = 2, so 11 is comfortable with 9, 10, 12 and 13;
    s(12) = 3, so 12 is comfortable with 9, 10, 11, 13, 14 and 15.
  Thus, there are 2 pairs of numbers comfortable with each other within the segment [10; 12]: (10, 11) and (11, 12).
*/

int sumDigit(int n){
    int res = 0;
    while(n != 0){
        res += n%10;
        n /= 10;
    }      
    return res; 
}
bool comfortable(int a, int b){
    int bound = sumDigit(a);
    return b >= a - bound && b <= a + bound;
}

int solution(int l, int r) {
    int res = 0;
    for(int i = l; i<=r; i++){
        for(int j = i+1; j<=r; j++){
            if(comfortable(i, j) && comfortable(j, i))
                res++;
        }
    }
    return res;
}
