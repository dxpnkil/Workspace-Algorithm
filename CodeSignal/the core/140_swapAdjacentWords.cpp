/*
  You are given a string consisting of words separated by whitespace characters, where the words consist only of English letters. 
  Your task is to swap pairs of consecutive words and return the result.
  
  input:  s = "CodeFight On"
  output: solution(s) = "On CodeFight"
*/

std::string solution(std::string s) {
  return std::regex_replace(s, std::regex("([^ ]+) ([^ ]+)"), "$2 $1");
}
