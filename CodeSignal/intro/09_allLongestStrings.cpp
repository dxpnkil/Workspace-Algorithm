/*
  Given an array of strings, return another array containing all of its longest strings.
  
  input:  inputArray = ["aba", "aa", "ad", "vcd", "aba"]
  output: allLongestStrings(inputArray) = ["aba", "vcd", "aba"]
*/

vector<string> allLongestStrings(vector<string> inputArray) {
    
    int longestLength = 0;
    
    for (int i = 0; i < inputArray.size(); i++) {
        string currentStr = inputArray[i];
        int currentLength = currentStr.length();
        if (currentLength > longestLength) {
            longestLength = currentLength;
        }
    }
    vector<string> res;
    for (int j = 0; j < inputArray.size(); j++) {
        string currentStr = inputArray[j];
        if (currentStr.length() == longestLength)
            res.push_back(currentStr);
    }
    return res; 
}
