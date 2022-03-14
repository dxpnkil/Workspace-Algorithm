/*
  Court is in session. We got a group of witnesses who have all taken an oath to tell the truth.
  The prosecutor is pointing at the defendants one by one and asking each witnesses a simple question - "guilty or not?". 
  The witnesses are allowed to respond in one of the following three ways:
      I am sure he/she is guilty.
      I am sure he/she is innocent.
      I have no idea.
  The prosecutor has a hunch that one of the witnesses might not be telling the truth so she decides to cross-check all of their testimonies 
  and see if the information gathered is consistent.
  
  input:  evidences = [[ 0, 1, 0, 1], 
                       [-1, 1, 0, 0], 
                       [-1, 0, 0, 1]]
  output: solution(evidences) = true
*/

bool solution(vector<vector<int>> evidences) {
    for (int i = 0; i < evidences[0].size(); ++i) {
        bool flag = false;
        int cnt = evidences.size();
        int sum = 0;
        for (int j = 0; j < evidences.size(); ++j) {
            if (evidences[j][i] == 0) {
                cnt--;
                continue;
            }
            sum += evidences[j][i];
        }
        if (cnt != abs(sum))
            return false;
    }
    return true;
}
