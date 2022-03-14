/*
  Determine if the given character is a digit or not.
  
  input:  symbol = '0'
  output: isDigit(symbol) = true
*/

bool isDigit(char symbol) {
    string s(1,symbol);
    regex checkDigit("[0-9]");
    return regex_match(s, checkDigit);
}
