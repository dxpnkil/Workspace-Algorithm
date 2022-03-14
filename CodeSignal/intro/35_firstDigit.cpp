/*
  Find the leftmost digit that occurs in a given string.
  
  input:  inputString = "var_1__Int"
  output: firstDigit(inputString) = '1'
*/

char firstDigit(string inputString) {
    for( auto x: inputString)
        if(isdigit(x))
            return x;
}
