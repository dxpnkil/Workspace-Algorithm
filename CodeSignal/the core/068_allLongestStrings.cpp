/*
  Given an array of strings, return another array containing all of its longest strings.
  
  input:  inputArray = ["aba", "aa", "ad", "vcd", "aba"]
  output: solution(inputArray) = ["aba", "vcd", "aba"]
*/

vector<string> solution(vector<string> inputArray) {
    vector <string> res;
    size_t len = 0;
    for ( auto& s: inputArray)
        len = max(len, s.size());
    for (auto& s: inputArray) {
        if (s.size() == len)
            res.push_back(s);
    }
    return res;
}
