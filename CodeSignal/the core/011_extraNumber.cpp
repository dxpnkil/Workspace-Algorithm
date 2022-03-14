/*
  You're given three integers, a, b and c. It is guaranteed that two of these integers are equal to each other. What is the value of the third integer?
  
  input:  a = 2, b = 7, and c = 2
  output: solution(a, b, c) = 7
*/

int solution(int a, int b, int c) {
    if(a == b)
        return c;
    else if( a == c)
        return b;
    else return a;
}
