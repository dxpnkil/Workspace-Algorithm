auto combine(const auto& ul, const auto& ur, const auto& ll, const auto& lr) {
    vector<vector<char>> result;
    
    auto copy = [&result](const auto& left, const auto& right) {
        for (int y = 0; y < size(left); ++y) {
            auto& row = result.emplace_back();
            row.insert(end(row), begin(left[y]), end(left[y]));
            row.push_back(' ');
            row.insert(end(row), begin(right[y]), end(right[y]));
        }
    };
    
    copy(ul, ur);
    copy(ll, lr);    
    return result;
}

std::vector<std::vector<char>> solution(int n) {
    vector<vector<char>>
        L = {{' ', '_', ' '}, {' ', '_', '|'}},
        R = {{' ', '_', ' '}, {'|', '_', ' '}},
        T = {{' ', ' ', ' '}, {'|', '_', '|'}},
        B = {{' ', '_', ' '}, {'|', ' ', '|'}};
    
    for (int i = 1; i < n; ++i) {
        tie(T, B, L, R) = tuple{
          combine(L, R, T, T),
          combine(B, B, L, R),
          combine(T, L, B, L),
          combine(R, T, R, B)
        };
        const auto h = size(T), w = size(T[0]);
        L[h/2][w/2+1] = R[h/2][w/2-1]
            = T[h/2].front() = T[h/2].back()
            = B[h/2].front() = B[h/2].back() = '|';
        
        const auto o = i%2 ? 1 : -1;
        L.front()[w/2] = L.back()[w/2]
            = L.front()[w/2+o] = L.back()[w/2+o]
            = R.front()[w/2] = R.back()[w/2]
            = R.front()[w/2-o] = R.back()[w/2-o]
            = T[h/2][w/2] = B[h/2-1][w/2] = '_';
        
        if (i%2-1) {
            B[h/2-1][w/2-1] = B[h/2-1][w/2+1] = '_';
            T[h/2][w/2-1] = T[h/2][w/2+1] = '_';
        }
    }
    return n%2 ? L : T;    
}
