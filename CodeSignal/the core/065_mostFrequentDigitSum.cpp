/*
  A step(x) operation works like this: it changes a number x into x - s(x), where s(x) is the sum of x's digits.
  You like applying functions to numbers, so given the number n, you decide to build a decreasing sequence of numbers: n, step(n), step(step(n)), etc., with 0 as the last element.
  Building a single sequence isn't enough for you, so you replace all elements of the sequence with the sums of their digits (s(x)). 
  Now you're curious as to which number appears in the new sequence most often. If there are several answers, return the maximal one.
  
  input:  n = 88
  output: solution(n) = 9
    Here is the first sequence you built: 88, 72, 63, 54, 45, 36, 27, 18, 9, 0;
    And here is s(x) for each of its elements: 16, 9, 9, 9, 9, 9, 9, 9, 9, 0.
  As you can see, the most frequent number in the second sequence is 9.
*/

int sumDigit(int x){
    int res = 0;
    while( x != 0){
        res += x%10;
        x /= 10;
    }
    return res;
}
int solution(int n) {
    int a[50]={0,};
    int res = 0;
    int count = 0;
    if ( n < 10)
        return n;
    while( n != 0){
        n = n - sumDigit(n);
        a[sumDigit(n)]++;
    }
    for(int i =0; i< 20; i++){
        count = max(count,a[i]);
        if(count == a[i])
            res = i;
    }
    return res;
}
