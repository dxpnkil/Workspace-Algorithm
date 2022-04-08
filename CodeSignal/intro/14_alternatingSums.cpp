/*
  Several people are standing in a row and need to be divided into two teams. 
  The first person goes into team 1, the second goes into team 2, the third goes into team 1 again, the fourth into team 2, and so on.
  You are given an array of positive integers - the weights of the people. 
  Return an array of two integers, where the first element is the total weight of team 1, and the second element is the total weight of team 2 after the division is complete.
  
  input:  a = [50, 60, 60, 45, 70]
  output: alternatingSums(a) = [180, 105]
*/

vector<int> alternatingSums(vector<int> a) {
    int n = a.size();
    vector < int > res;
    res.push_back(0);
    res.push_back(0);
    for(int i = 0; i<n; i++){
        res[i%2] += a[i];
    }
    return res;
}
