/*
  Given two arrays of integers a and b, obtain the array formed by the elements of a followed by the elements of b.
  
  input:  a = [2, 2, 1] and b = [10, 11]
  output: solution(a, b) = [2, 2, 1, 10, 11]
*/

vector<int> solution(vector<int> a, vector<int> b) {
    a.insert(a.end(), b.begin(), b.end());
    return a;
}
