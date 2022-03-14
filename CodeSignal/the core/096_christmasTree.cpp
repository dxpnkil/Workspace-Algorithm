/*
  Draw the Christmas Tree using nothing but asterisks.
  
  input:  levelNum = 2 and levelHeight = 4
  output: solution(levelNum, levelHeight) = 
                      ["      *", 
                       "      *", 
                       "     ***", 
                       "    *****", 
                       "   *******", 
                       "  *********", 
                       " ***********", 
                       "   *******", 
                       "  *********", 
                       " ***********", 
                       "*************", 
                       "    *****", 
                       "    *****"]
 */ 

vector<string> solution(int levelNum, int levelHeight) {
    vector <int> v {0, 0, 1};
    for (int i = 0; i < levelNum; i++) {
        for (int j = 0; j < levelHeight; j++) {
            v.push_back(i + j + 2);
        }
    }
    for (int i = 0; i < levelNum; i++) {
        v.push_back(levelHeight >> 1);
    }
    vector <string> res;
    for (auto x : v) {
        string line = string(levelNum+ levelHeight- x, ' ') + string(x<<1 | 1, '*');
        res.push_back(line);
    }
    return res;
}
