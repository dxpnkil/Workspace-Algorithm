/*
  An array is called smooth if its first and its last elements are equal to one another and to the middle. Given an array arr, determine if it is smooth or not.
  
  input:  arr = [7, 2, 2, 5, 10, 7]
  output: solution(arr) = true
*/

bool solution(vector<int> arr) {
    if(arr.size() %2 == 1)
        return (arr[0] == arr[arr.size() - 1]) && (arr[0] == arr[arr.size()/2]);
    else return (arr[0] == arr[arr.size() - 1]) && (arr[0] == arr[arr.size()/2 -1]+arr[arr.size()/2]);
}
