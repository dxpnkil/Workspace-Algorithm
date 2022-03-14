/*
  Given array arr, your task is to find its middle, and, if it consists of two elements, replace those elements with the value of middle. 
  Return the resulting array as the answer.
  
  input:  arr = [7, 2, 2, 5, 10, 7]
  output: solution(arr) = [7, 2, 7, 10, 7]
*/

vector<int> solution(vector<int> arr) {
    if (arr.size() % 2 == 1) 
        return arr;
        
    int mid = arr[arr.size() / 2 - 1] + arr[arr.size() / 2];
    arr[arr.size() / 2 - 1] = mid;
    arr.erase(arr.begin() + arr.size() / 2, arr.begin() + arr.size() / 2 + 1);
    return arr;
}
