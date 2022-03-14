/*
  Check if all digits of the given integer are even.

  input:  n = 248622
  output: evenDigitsOnly(n) = true
*/

bool evenDigitsOnly(int n) {
    while(n != 0){
        if((n%2) != 0)
            return false;
        n = n/10;
    }
    return true;
}
