/*
  You are watching a volleyball tournament, but you missed the beginning of the very first game of your favorite team. 
  Now you're curious about how the coach arranged the players on the field at the start of the game.
  
  Given the current formation of the team and the number of times k it gained the serve, find the initial position of each player in it.
  
  input:  formation = [["empty",   "Player5", "empty"],
                       ["Player4", "empty",   "Player2"],
                       ["empty",   "Player3", "empty"],
                       ["Player6", "empty",   "Player1"]]
          and k = 2
  output: solution(formation, k) = [["empty",   "Player1", "empty"],
                                    ["Player2", "empty",   "Player3"],
                                    ["empty",   "Player4", "empty"],
                                    ["Player5", "empty",   "Player6"]]
*/

vector<vector<string>> solution(vector<vector<string>> formation, int k) {
    map < pair<int,int>, pair<int,int> > m;
    m[make_pair(0, 1)] = make_pair(1, 0);
    m[make_pair(1, 2)] = make_pair(0, 1);
    m[make_pair(3, 2)] = make_pair(1, 2);
    m[make_pair(2, 1)] = make_pair(3, 2);
    m[make_pair(3, 0)] = make_pair(2, 1);
    m[make_pair(1, 0)] = make_pair(3, 0);
    for (int i = 0; i < k % 6; ++i) {
        auto temp = formation;
        for (auto p: m) {
            auto pos = p.first;
            auto dest = p.second;
            temp[dest.first][dest.second] = formation[pos.first][pos.second];
        }
        formation = temp;
    }
    return formation;
}

