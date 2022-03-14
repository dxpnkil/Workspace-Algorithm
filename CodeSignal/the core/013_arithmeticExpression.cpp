/*
  Consider an arithmetic expression of the form a#b=c. Check whether it is possible to replace # with one of the four signs: +, -, * or / to obtain a correct expression.
  
  input:  a = 2, b = 3, and c = 5
  output: solution(a, b, c) = true
*/

bool solution(int a, int b, int c) {
    return ( a+b == c || a*b == c || c*b == a || a-b == c);
}
