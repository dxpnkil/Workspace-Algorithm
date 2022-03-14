/*
  Given n and firstNumber, find the number which is written in the radially opposite position to firstNumber
  
  input:  n = 10 and firstNumber = 2
  output: circleOfNumbers(n, firstNumber) = 7
*/

int circleOfNumbers(int n, int firstNumber) {
    int res;
    if(firstNumber >= n/2)
        res = firstNumber - n/2;
    else res = firstNumber + n/2;
    return res;
}
