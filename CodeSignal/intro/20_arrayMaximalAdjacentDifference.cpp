/*
  Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

  input:  inputArray = [2, 4, 1, 0] 
  output: arrayMaximalAdjacentDifference(inputArray) = 3
*/

int arrayMaximalAdjacentDifference(vector<int> inputArray) {
    int res = -INT_MAX;
    for(int i=0; i<inputArray.size()-1; i++){
        int temp = abs(inputArray[i] - inputArray[i+1]);
        res = max(temp, res);
    }
    return res;
}
