/*
  Given some integer, find the maximal number you can obtain by deleting exactly one digit of the given number.
  input:  n = 152
  output: deleteDigit(n) = 52
 */
 
 int deleteDigit(int n) {
    string s = to_string(n);
    int res = -INT_MAX;
    for(int i = 0; i < s.length(); i++){
        string temp = s;
        temp.erase(i,1);
        res = max(res, stoi(temp));
    }
    return res;
}
