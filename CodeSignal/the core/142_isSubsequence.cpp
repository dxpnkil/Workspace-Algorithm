/*
  Given a string s, determine if it is a subsequence of a given string t.
  
  input:  t = "CodeSignal" and s = "CoSi"
  output: t = "CodeSignal" and s = "CoSi"
*/

bool solution(std::string t, std::string s) {
  std::string pattern = "";
  for (char ch : s) {
    pattern += ".*["  + std::string{ch} + ']';
  }
  std::regex regex(pattern);
  return std::regex_search(t, regex);
}
