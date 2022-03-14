/*
  Given an integer size, return array of length size filled with 1s.
  
  input:  size = 4
  output: solution(size) = [1, 1, 1, 1]
*/

vector<int> solution(int size) {
    vector<int> res;
    while(size--)
        res.push_back(1);
    return res;
}
