/*
  Given integers a and b, determine whether the following pseudocode results in an infinite loop

  while a is not equal to b do
      increase a by 1
      decrease b by 1
  input:  a = 2 and b = 6
  output: solution(a, b) = false
*/

bool solution(int a, int b) {
    if ( a == b )
        return false;
    if ( b>a && (b-a)%2 == 0)
        return false;
    return true;
}
