/*
  John has written down some positions using his notation, and now he wants to rotate the board 90 degrees clockwise and see what notation for the new board would look like. 
  Help him with this task.
  
  input:  notation = "rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR"
  output: solution(notation) = "RP4pr/NP4pn/BP4pb/QP4pq/K2P2pk/BP4pb/NP4pn/RP4pr"
*/

string solution(string notation) {
    vector<vector<char>> board(8,vector<char>(8));
    int y = 0, x = 0;
    
    for (auto c : notation) {
        if (c == '/') {
            ++y; 
            x = 0;
        }
        else if (isdigit(c)) 
            x += c - '0';
        else board[x++][7-y] = c;
    }
    
    string res = "";
    for (auto &r : board) {
        int cnt = 0;
        for (auto c : r) {
            if (c) {
                if (cnt) 
                    res += char(cnt + '0');
                cnt = 0;
                res += c;
            }
            else ++cnt;
        }
        if (cnt) 
            res += char(cnt + '0');
        res += '/';
    }
    res.pop_back();
    return res;
}
