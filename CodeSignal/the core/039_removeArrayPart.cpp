/*
  Remove a part of a given array between given 0-based indexes l and r (inclusive).
  
  input:  inputArray = [2, 3, 2, 3, 4, 5], l = 2, and r = 4
  output: solution(inputArray, l, r) = [2, 3, 5]
*/

vector<int> solution(vector<int> inputArray, int l, int r) {
    inputArray.erase( inputArray.begin() + l, inputArray.begin() + r + 1);
    return inputArray;
}
