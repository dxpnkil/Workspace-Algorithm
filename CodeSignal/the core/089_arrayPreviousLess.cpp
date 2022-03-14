/*
  Given array of integers, for each position i, search among the previous positions for the last (from the left) position that contains a smaller value. 
  Store this value at position i in the answer. If no such value can be found, store -1 instead.
  
  iput:   items = [3, 5, 2, 4, 5]
  output: solution(items) = [-1, 3, -1, 2, 4]
*/

vector<int> solution(vector<int> items) {
    vector <int> res;
    res.push_back(-1);
    items.insert(items.begin(), -1);
    
    for(int i = 2; i < items.size(); i++){
        int  j = i - 1;
        while( items[j] >= items[i] ){
            j--;
        }
        res.push_back(items[j]);
    }
    return res;
}
