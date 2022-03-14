void rotate90(vector< vector<int> >& grid) {
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3 - i; j++) {
            int tmp = grid[i][j];
            grid[i][j] = grid[j][3 - i];
            grid[j][3 - i] = grid[3 - i][3 - j];
            grid[3 - i][3 - j] = grid[3 - j][i];
            grid[3 - j][i] = tmp;
        }
}

void rotate(int degree, vector< vector<int> >& grid) {
    while (degree) { 
        rotate90(grid); 
        degree -= 90; 
    }
}

void moveLeft(vector< vector<int> >& grid) {
    for(int i = 0; i < 4; i++) {
        stack<int> numbers;
        for(int j = 3; j >= 0; j--)
            if (grid[i][j] != 0)
                numbers.push(grid[i][j]);
        int index = 0;
        while(!numbers.empty()) {
            int number = numbers.top();
            numbers.pop();
            if (!numbers.empty() && numbers.top() == number)    {
                number <<= 1;
                numbers.pop();
            }
            grid[i][index++] = number;
        }
        while(index < 4)
            grid[i][index++] = 0;
    }
}

vector<vector<int>> solution(vector<vector<int>> grid, string path) {
    for (int i = 0; i < path.size(); i++) {
        char direction = path[i];
        if (direction == 'L')   moveLeft(grid);
        else if (direction == 'R') { 
            rotate(180, grid); moveLeft(grid); rotate(180, grid); }
        else if (direction == 'U') { 
            rotate(90, grid); moveLeft(grid); rotate(270, grid); }
        else if (direction == 'D') { 
            rotate(270, grid); moveLeft(grid); rotate(90, grid); }
    }
    return grid;
}
