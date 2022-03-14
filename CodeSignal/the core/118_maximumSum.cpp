/*
  You are given an array of integers a. A range sum query is defined by a pair of non-negative integers l and r (l <= r). 
  The output to a range sum query on the given array a is the sum of all the elements of a that have indices from l to r, inclusive.
  You have the array a and a list of range sum queries q. 
  Find an algorithm that can rearrange the array a in such a way that the total sum of all of the query outputs is maximized, and return this total sum.
  
  input:  a = [9, 7, 2, 4, 4] and q = [[1, 3], [1, 4], [0, 2]]
  output: solution(a, q) = 62
*/

int solution(vector<int> a, vector<vector<int>> q) {
    int res = 0;
    vector <int> cnt(a.size());
    
    for (auto &x: q) {
        for (int i = x[0]; i <= x[1]; ++i) {
            cnt[i]++;
        }
    }
    sort(cnt.begin(), cnt.end());
    sort(a.begin(), a.end());   
    for (int i = 0; i < a.size(); ++i) {
        res += a[i] * cnt[i];
    }
    
    return res;
}

