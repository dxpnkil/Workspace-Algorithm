/*
  You are given a vertical box divided into equal columns. Someone dropped several stones from its top through the columns. 
  Stones are falling straight down at a constant speed (equal for all stones) while possible. 
  Given the state of the box at some moment in time, find out which columns become motionless first.
  
  input:  rows = ["#..##",
                  ".##.#",
                  ".#.##",
                  "....."]
  output: solution(rows) = [1, 4]
*/

vector<int> solution(vector<string> rows) {
    vector<int> res;
    vector<int> vt( rows[0].length() ,0);
    int cnt = INT_MAX;
    
    for (int i = 0; i < rows[0].length(); ++i) {
        bool flag = false;
        for (int j = 0; j < rows.size(); ++j) {
            if (rows[j][i] == '#') { 
                flag = true;
            }
            else if (flag) vt[i]++;
        }
        cnt = min (cnt, vt[i]);
    }
    for (int i = 0; i < rows[0].size(); ++i) {
        if (vt[i] == cnt) {
            res.push_back(i);
        }
    }
    return res;
}
