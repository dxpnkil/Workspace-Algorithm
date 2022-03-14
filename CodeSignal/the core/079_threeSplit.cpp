/*
  You have a long strip of paper with integers written on it in a single line from left to right. 
  You wish to cut the paper into exactly three pieces such that each piece contains at least one integer and the sum of the integers in each piece is the same. 
  You cannot cut through a number, i.e. each initial number will unambiguously belong to one of the pieces after cutting. How many ways can you do it?
  
  intput: a = [0, -1, 0, -1, 0, -1]
  output: solution(a) = 4
  
  Here are all possible ways
        [0, -1] [0, -1] [0, -1]
        [0, -1] [0, -1, 0] [-1]
        [0, -1, 0] [-1, 0] [-1]
        [0, -1, 0] [-1] [0, -1]
*/

int solution(vector<int> a) {
    int res = 0;
    vector < long long > sumPiece(a.size());
    
    sumPiece[0] = a[0];
    for(int i = 1; i< a.size(); i++)
        sumPiece[i] = sumPiece[i - 1] + a[i];
    long long averageSum = sumPiece.back() / 3;    
    for (int i = 0; i < a.size() - 2; ++i) {
        for (int j = i + 1; j < a.size() - 1; ++j) {
           long long left = sumPiece[i];
           long long middle = sumPiece[j] - sumPiece[i]; 
           long long right = sumPiece.back() - sumPiece[j];
            if (left == averageSum && middle == averageSum && right == averageSum)
                ++res;
        }
    }
    return res;
}
