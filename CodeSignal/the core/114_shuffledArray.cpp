/*
  Given the array shuffled, consisting of elements a1, a2, ..., an, a1 + a2 + ... + an in random order, return the sorted array of original elements a1, a2, ..., an.
  
  input:  shuffled = [1, 12, 3, 6, 2]
  output: shuffled = [1, 12, 3, 6, 2]
*/

vector<int> solution(vector<int> shuffled) {
    int sum = 0;
    vector <int> res;
    for (auto n: shuffled){
        sum += n;
    }
    sort(shuffled.begin(), shuffled.end());
    bool flag = true;
    for (auto n: shuffled){
        if(flag){
            if (n == sum/2){
                flag = false;
                continue;
            }
            res.push_back(n);
        }
        else res.push_back(n);  
    }
    return res;
}
