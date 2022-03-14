/*
  You are given n rectangular boxes, the ith box has the length lengthi, the width widthi and the height heighti
  Your task is to check whether there is such sequence of n different numbers pi (1 ≤ pi ≤ n) that for each 1 ≤ i < n the box number pi can be put into the box number pi+1.
  
  input:  length = [1, 3, 2], width = [1, 3, 2], and height = [1, 3, 2]
  output: solution(length, width, height) = true
*/

bool solution(vector<int> length, vector<int> width, vector<int> height) {
    int sz = length.size();
    vector <vector<int>> boxes;
    
    for (int i = 0; i < sz; ++i) {
        vector <int> box {length[i], width[i], height[i]};
        sort(box.begin(), box.end());
        boxes.push_back(box);
    }
    
    sort(boxes.begin(), boxes.end());
    for(int i = 1; i < sz; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (boxes[i-1][j] >= boxes[i][j])
                return false;
        }
    }
    return true;
}
