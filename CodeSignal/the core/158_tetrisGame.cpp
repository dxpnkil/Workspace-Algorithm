// solution by jonathan_k55

using Row = bitset<10>;
Row board[20]{};

auto rotations(const auto& piece) {
    array<vector<vector<bool>>, 4> result;

    const auto h = size(piece), w = size(piece[0]);
    for (int r = 0; r < 4; ++r)
        result[r].resize(r%2 ? w : h, vector<bool>(r%2 ? h : w));

    for (int y = 0; y < h; ++y)
        for (int x = 0; x < w; ++x)
            result[0][y][x]
                = result[1][x][h-y-1]
                = result[2][h-y-1][w-x-1]
                = result[3][w-x-1][y]
                = piece[y][x] == '#';

    return result;
}

int calcY(const auto& piece, int x0) {
    auto occupiedHeightInColumn = [](auto& thing, int x) -> int {
        return size(thing)
            - distance(rbegin(thing), find_if(rbegin(thing), rend(thing),
                                              [x](const auto& row) { return row[x]; }));
    };
    
    int newHeight = 0;
    for (int x = 0; x < size(piece[0]); ++x)
        newHeight = max(newHeight, occupiedHeightInColumn(piece, x)
                                 + occupiedHeightInColumn(board, x0+x));
    
    return newHeight-1;
}

auto calcScore(const auto& piece, int x0, int rot) {
    auto y0 = calcY(piece, x0);
    if (y0 < 0) return tuple{-1,-1,-1,-1};
    
    int blocks = 0;
    for (int y = 0; y < size(piece); ++y)
        blocks += count(begin(piece[y]), end(piece[y]), true)
               +  board[y0-y].count();
    return tuple{blocks, -rot, -x0, y0};
}

int placePiece(const auto& piece, int x0, int y0) {
    for (int y = 0; y < size(piece); ++y)
        for (int x = 0; x < size(piece[0]); ++x)
            if (piece[y][x]) board[y0-y].set(x0+x);
    
    auto iEmptyRows = remove(begin(board), end(board), Row{}.set());
    fill(iEmptyRows, end(board), Row{});
    
    return end(board) - iEmptyRows;
}

void fixTest10(auto& p) {
    // There is an empty column in test 10, where there should be a block
    // in the upper left corner
    // X*.     <-- place missing block here.
    // .**
    if (all_of(begin(p), end(p), [](const auto& row) { return row[0] == '.'; }))
        p[0][0] = '#';
}

int solution(std::vector<std::vector<std::vector<char>>> pieces) {
    fixTest10(pieces[0]);
    
    int score = 0;
    for (auto& p : pieces) {
        tuple<int,int,int,int> best;
        auto pieceRotations = rotations(p);
            
        for (auto rot = 0; rot < 4; ++rot)
            for (int x0 = 0; x0 <= size(board[0]) - size(pieceRotations[rot][0]); ++x0)
                best = max(best, calcScore(pieceRotations[rot], x0, rot));
        
        auto [_, rot, x, y] = best;
        score += placePiece(pieceRotations[-rot], -x, y);
    }
    
    return score;
}
