auto checkPath(auto field, int fromy, int fromx, int toy, int tox) {
    const int d[] = {1, 0, -1, 0, 1};
    queue<pair<int,int>> q;
    for (q.emplace(fromy, fromx); !q.empty(); ) {
        auto [y, x] = q.front(); q.pop();
        for (int i = 0; i < 4; ++i)
            if (int nx = x + d[i], ny = y + d[i+1];
                ny >= 0 && ny < 9 && nx >= 0 && nx < 9
                && field[ny][nx] == '.')
            {
                field[ny][nx] = '*';
                q.emplace(ny, nx);
            }
    }
    return field[toy][tox] == '*';
};

auto checkLines(auto& field) {
    vector<array<int,5>> lines;
    auto checkLine = [&](int y, int x, int dy, int dx) {
        int count = 0;
        for (char last = '.'; y >= 0 && y < 9 && x >= 0 && x < 9; x+=dx, y+=dy) {
            if (field[y][x] != last) {
                if (count >= 5) break;
                count = 0;
            }
            last = field[y][x];
            count += last != '.';
        }
        if (count >= 5)
            lines.push_back({y, x, dy, dx, count});
    };
    
    for (int y = 0; y < 9; ++y) checkLine(y, 0, 0, 1);
    for (int x = 0; x < 9; ++x) checkLine(0, x, 1, 0);
    for (int y = 0; y < 9; ++y) checkLine(y, 0, 1, 1);
    for (int x = 1; x < 9; ++x) checkLine(0, x, 1, 1);
    for (int y = 0; y < 9; ++y) checkLine(y, 0,-1, 1);
    for (int x = 1; x < 9; ++x) checkLine(8, x,-1, 1);
    
    int score = size(lines) - 1;
    for (auto [y, x, dy, dx, count] : lines) {
        score += count;
        while (count--) {
            y -= dy; x -= dx;
            field[y][x] = '.';
        }
    }
    return max(0, score);
}
    
int solution(std::vector<std::vector<char>> field, std::vector<std::vector<int>> clicks, std::vector<char> newBalls, std::vector<std::vector<int>> newBallsCoordinates) {
    int ni = 0, score = 0, fromy = -1, fromx;
    
    for (const auto& c : clicks) {
        auto toy = c[0], tox = c[1];
        if (field[toy][tox] == '.') {
            if (~fromy && checkPath(field, fromy, fromx, toy, tox)) {
                swap(field[toy][tox], field[fromy][fromx]);
                if (auto points = checkLines(field))
                    score += points;
                else {
                    for (const auto i = ni+3; ni < i; ++ni) {
                        const auto& nb = newBallsCoordinates[ni];
                        field[nb[0]][nb[1]] = newBalls[ni];
                    }
                    score += checkLines(field);
                }
            }
            toy = -1;
        }
        fromy = toy;
        fromx = tox;
    }
    return score;
}
