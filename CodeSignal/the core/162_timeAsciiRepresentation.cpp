std::vector<std::vector<char>> solution(std::vector<std::vector<char>> dtime) {
    string rep;
    for (const auto x0 : {1, 5, 10, 14}) {
        auto b = 32, i = 0;
        for (const auto [y, x] : {pair{0,1},{1,0},{1,2},{8,1},{9,0}})
            b |= (dtime[y][x0+x] == '*') << i++;
        rep += "7)=-.+;%?/"s.find(b)+'0';
    }
    const auto m = stod(rep.substr(2)), h = stoi(rep.substr(0,2))%12 + m/60;
    
    for (int y = -8; y <= 8; ++y)
        for (int x = -8; x <= 8; ++x) {
            const auto r = 8.5 - hypot(x, y);
            auto handdist = [=](const auto ratio) {
                const auto
                    a = ratio*2*M_PI,
                    dy = -cos(a),
                    dx = sin(a),
                    sp = x*dx + y*dy;
                return sp >= 0 && r >= 0 ? abs(x*dy - y*dx) : numeric_limits<double>::max();
            };
            const auto mindist = min({abs(r), handdist(h/12), handdist(m/60)});
            dtime[y+8][x+8] = ".*"[mindist < sqrt(0.49999)];
        }

    return dtime;
}
