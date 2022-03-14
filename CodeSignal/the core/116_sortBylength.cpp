/*
  Given an array of strings, sort them in the order of increasing lengths. 
  If two strings have the same length, their relative order must be the same as in the initial array.
  
  input:  inputArray = ["abc",
                          "",
                          "aaa",
                          "a",
                          "zz"]
  output: solution(inputArray) = ["",
                                  "a",
                                  "zz",
                                  "abc",
                                  "aaa"]
*/

vector<string> solution(vector<string> inputArray) {
    for(int i = 0; i<inputArray.size(); ++i) {
        for(int j = 0 ; j<inputArray.size() - 1; ++j) {
            if (inputArray[j].size() > inputArray[j + 1].size())
                swap(inputArray[j], inputArray[j + 1]);
        }
    }
    return inputArray;
}
