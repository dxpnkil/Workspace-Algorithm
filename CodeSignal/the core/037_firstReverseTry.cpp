/*
  Given an array arr, swap its first and last elements and return the resulting array.
  
  input:  arr = [1, 2, 3, 4, 5]
  output: solution(arr) = [5, 2, 3, 4, 1]
*/

vector<int> solution(vector<int> arr) {
    if (arr.size() < 2) {
        return arr;
    }
    int temp = arr[arr.size() - 1];
    arr[arr.size() - 1] = arr[0];
    arr[0] = temp;
    return arr;
}
