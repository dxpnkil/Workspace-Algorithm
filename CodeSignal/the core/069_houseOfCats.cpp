/*
  There are some people and cats in a house. You are given the number of legs they have all together. 
  Your task is to return an array containing every possible number of people that could be in the house sorted in ascending order. 
  
  input:  legs = 6
  output: solution(legs) = [1, 3]
  There could be either 1 cat and 1 person (4 + 2 = 6) or 3 people (2 * 3 = 6).
*/

vector<int> solution(int legs) {
    vector <int> res;
    for (int i = 0; i <= legs / 2; ++i) {
        if (legs - i * 2 < 0)
            break;
        if ( (legs - i * 2) % 4 == 0)
            res.push_back(i);
    }
    return res;
}
