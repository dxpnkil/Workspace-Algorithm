/*
  Define crossover operation over two equal-length strings A and B as follows:
      the result of that operation is a string of the same length as the input strings
      result[i] is either A[i] or B[i], chosen at random
  Given array of strings inputArray and a string result, find for how many pairs of strings from inputArray the result of the crossover operation over them may be equal to result.
  
  input:  inputArray = ["abc", "aaa", "aba", "bab"] and result = "bbb"
  output: solution(inputArray, result) = 2
*/

int solution(vector<string> inputArray, string result) {
    int res = 0;
    for(int i = 0; i < inputArray.size() - 1; i++){
        for(int j = i + 1; j < inputArray.size(); j++){
            int cnt = 1;
            for(int k = 0; k < result.length(); k++){
                if(result[k] != inputArray[i][k] && result[k] != inputArray[j][k])
                    cnt = 0;
            }
            res += cnt;
        }
    }
    return res;
}
