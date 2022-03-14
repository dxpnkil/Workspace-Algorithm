// 
vector<int> solution(string king, string amazon) {
    int k[] = {'8' - king[1], king[0] - 'a'};
    int a[] = {'8' - amazon[1], amazon[0] - 'a'};
    
    char board[8][8];
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j) {
            bool aroundWhiteKing = max(abs(i - k[0]), abs(j - k[1])) <= 1;
            bool knightThreat = abs((i - a[0])*(j - a[1])) == 2;
            bool isAmazon = i == a[0] && j == a[1];
            bool rookThreat = (i == a[0]) != (j == a[1]);
            bool bishopThreat = abs(i-a[0]) == abs(j-a[1]);
            bool whiteKingSameDirection = (k[0]-a[0])*(j-a[1]) == (i-a[0])*(k[1]-a[1]);
            int d[] = {2*k[0] - a[0] - i, 2*k[1] - a[1] - j, a[0] - i, a[1] - j};
            bool whiteKingInTheWay = d[0]*d[0] + d[1]*d[1] <= d[2]*d[2] + d[3]*d[3];
            
            board[i][j] = aroundWhiteKing ? 'F'
                        : knightThreat ? '+'
                        : isAmazon ? 'A'
                        : (rookThreat || bishopThreat) &&
                          !(whiteKingInTheWay && whiteKingSameDirection) ? '+'
                        : 'o';
        }
    
    int mate = 0, check = 0, stale = 0, safe = 0;
    int dirs[] = {1,1,0,-1,-1,-1,0,1,1,1};
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == 'o' || board[i][j] == '+') {
                bool isSafe = board[i][j] == 'o';
                bool hasSafeMove = false;
                for (int dir = 0; dir < 8; ++dir)
                    if (int x = j + dirs[dir], y = i + dirs[dir+2];
                        x >= 0 && x < 8 && y >= 0 && y < 8
                        && board[y][x] == 'o' || board[y][x] == 'A') {
                        hasSafeMove = true;
                        break;
                    }
                mate += !isSafe && !hasSafeMove;
                check += !isSafe && hasSafeMove;
                stale += isSafe && !hasSafeMove;
                safe += isSafe && hasSafeMove;
            }
        }
    }
    return {mate, check, stale, safe};
}
