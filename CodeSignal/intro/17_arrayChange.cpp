/*
  You are given an array of integers. 
  On each move you are allowed to increase exactly one of its element by one. 
  Find the minimal number of moves required to obtain a strictly increasing sequence from the input.
  
  input:  inputArray = [1, 1, 1] 
  output: arrayChange(inputArray) = 3
*/

int arrayChange(vector<int> inputArray) {
    int res = 0;
    
    for (int i = 0; i < inputArray.size()-1; i++){
        if (inputArray[i+1] <= inputArray[i]){
            int temp = inputArray[i] - inputArray[i+1] + 1;
            res += temp;
            inputArray[i+1] += temp;
        }
    }
    
    return res;
}
