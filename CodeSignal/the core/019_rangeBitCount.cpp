/*
  You are given two numbers a and b where 0 ≤ a ≤ b. 
  Imagine you construct an array of all the integers from a to b inclusive. You need to count the number of 1s in the binary representations of all the numbers in the array.
  
  input:  a = 2 and b = 7
  output: solution(a, b) = 11
*/

int count(int a){
    int res = 0;
    while(a != 0){
        res += a%2;
        a /=2 ;
    }
    return res;
}
int solution(int a, int b) {
    int res = 0;
    for( int i = a; i<= b; i++)
        res += count(i);
    return res;
}
