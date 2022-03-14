/*
  Implement a function that replaces each digit in the given string with a '#' character.
  
  input:  input = "There are 12 points"
  output: solution(input) = "There are ## points"
*/

std::string solution(std::string input) {
  return std::regex_replace(input, std::regex("[0-9]"), "#");;
}

