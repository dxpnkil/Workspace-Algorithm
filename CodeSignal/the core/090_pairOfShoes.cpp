/*
  Yesterday you found some shoes in the back of your closet. Each shoe is described by two values:
    type indicates if it's a left or a right shoe;
    size is the size of the shoe.
  Your task is to check whether it is possible to pair the shoes you found in such a way that each pair consists of a right and a left shoe of an equal size.
  
  input:  shoes = [[0, 21], 
                   [1, 23], 
                   [1, 21], 
                   [0, 23]
  output: solution(shoes) = true
*/

bool solution(vector<vector<int>> shoes) {
    vector<int> v(1000, 0);
    for(auto x : shoes)
        x[0] == 0 ? v[x[1]]++ : v[x[1]]--;
    for(auto x : v){
        if(x != 0)
            return false;
    }
    return true;
}
