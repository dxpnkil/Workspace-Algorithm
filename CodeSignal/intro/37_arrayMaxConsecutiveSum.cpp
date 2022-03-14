/*
  Given array of integers, find the maximal possible sum of some of its k consecutive elements.

  input:  inputArray = [2, 3, 5, 1, 6] and k = 2
  output: arrayMaxConsecutiveSum(inputArray, k) = 8
*/

int arrayMaxConsecutiveSum(vector<int> inputArray, int k) {
    int res = -INFINITY;
    int sz = inputArray.size();
    for(int i = 0 ; i <= sz - k; i++){
        int temp = 0;
        for(int j = i; j< i+k; j++){
            temp += inputArray[j];
        }
        res = max(res, temp);
    }
    return res;
}
