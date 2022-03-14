int solution(vector<string> state) {
    struct Drop {
        int x, y, dir;
        char id;
    };

    const int h = size(state), w = size(state[0]);

    auto moveDrop = [&](auto& d) {
        const int dxy[] = {1, 0, -1, 0, 1}; // R T L B
        d.x += dxy[d.dir];
        d.y += dxy[d.dir+1];
        return !(d.x < 0 || d.x >= w || d.y < 0 || d.y >= h);
    };

    auto followPipe = [&](auto& d) {
        const auto s = state[d.y][d.x]-'0';
        return s == (s&7)
            && (0xe2cc9ab4 & 1 << s + 8*d.dir)
            && (d.dir ^= 0x3740 >> 2*s & 3, true);
    };

    vector<Drop> drops;
    for (int y = h; y--;)
        for (int x = w; x--;)
            if (auto c = state[y][x]; isalpha(c) && islower(c))
                for (int dir = 4; dir--;)
                    if (Drop d{x, y, dir, toupper(c)}; moveDrop(d) && followPipe(d))
                        drops.emplace_back(d);

    unordered_set<int> filled;
    while (!drops.empty()) {
        for (const auto& d : drops)
            filled.insert(d.y*w + d.x);

        for (auto& d : drops)
            if (!moveDrop(d) || (state[d.y][d.x] == d.id ? d.id = 0 : !followPipe(d)))
                    return -size(filled);
        
        drops.erase(remove_if(begin(drops), end(drops), not_fn(&Drop::id)), end(drops));
    }
    
    return size(filled);
}
