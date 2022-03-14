vector<vector<char>> solution(vector<vector<char>> gameBoard, string commands) {
    int w = size(gameBoard[0]),
        h = size(gameBoard),
        dirs[]{1, 0, -1, 0, 1},
        hy = 0, hx = 0, hd;

    while (hy*hx < h*w && (hd = ">^<v"s.find(gameBoard[hy][hx]))<0)
        ++hx<w ?: (hx=0, ++hy);

    queue<pair<int,int>> snake;
    function<void(int,int,int)> walk = [&](int y, int x, int dir) {
        if ((y^h)*(x^w)<1 || gameBoard[y][x] != '*') return;
        for (int d = 4; d--;)
            if (d^dir^2)
                walk(y + dirs[d+1], x + dirs[d], d);
        snake.emplace(y, x);
    };
    walk(hy - dirs[hd+1], hx - dirs[hd], hd^2);
    snake.emplace(hy, hx);

    for (auto c : commands) {
        if (c == 'F')
            if (int nx = hx + dirs[hd], ny = hy + dirs[hd+1];
                (ny^h)*(nx^w)>0 && gameBoard[ny][nx] == '.') {
                auto [ty, tx] = snake.front();
                snake.pop();
                gameBoard[hy][hx] = '*';
                gameBoard[ty][tx] = '.';
                snake.emplace(hy = ny, hx = nx);
            }
            else {
                for (; !snake.empty(); snake.pop()) {
                    auto [y, x] = snake.front();
                    gameBoard[y][x] = 'X';
                }
                break;
            }
        gameBoard[hy][hx] = ">^<v"[hd = hd + "FL R"s.find(c) & 3];
    }
    
    return gameBoard;
}
