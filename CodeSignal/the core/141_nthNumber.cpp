/*
  You are given a string s of characters that contains at least n numbers. 
  The numbers may contain leading zeros, but it is guaranteed that each number has at least one non-zero digit in it.
  Your task is to find the nth number and return it as a string without leading zeros.
  
  input:  s = "8one 003number 201numbers li-000233le number444" and n = 4
  output: solution(s, n) = "233"
*/

std::string solution(std::string s, int n) {
  std::regex regex(
    "(?:[^1-9]*([0-9]+)){"+to_string(n)+"}.*"
  );
  std::smatch match;
  std::regex_match(s, match, regex);
  return match[1];
}
