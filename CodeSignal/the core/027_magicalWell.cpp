/*
  You are standing at a magical well. It has two positive integers written on it: a and b. 
  Each time you cast a magic marble into the well, it gives you a * b dollars and then both a and b increase by 1. 
  You have n magic marbles. How much money will you make?
  
  input:  a = 1, b = 2, and n = 2
  output: solution(a, b, n) = 8
*/

int solution(int a, int b, int n) {
    int res = 0;
    while(n--){
        res += a*b;
        a++; 
        b++;
    }
    return res;
    
}
