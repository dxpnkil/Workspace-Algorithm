/*
  Correct variable names consist only of English letters, digits and underscores and they can't start with a digit.
  Check if the given string is a correct variable name.
  
  input:  name = "var_1__Int"
  output: variableName(name) = true
*/

bool variableName(string name) {
    regex checkName ("[_a-zA-z][_a-zA-Z0-9]*");
    return regex_match(name, checkName);
}
