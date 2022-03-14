/*
  You are given a table in ASCII graphics, where the following characters are used for borders: +, -, |. 
  The rows can have different heights and the columns can have different widths. 
  Each cell has an area greater than 1 (excluding the borders) and can contain any ASCII characters excluding +, - and |.
  The algorithm you want to implement should merge the cells within a given rectangular part of the table into a single cell by removing the borders between them. 
  The cells to join are represented by the coordinates of the cells at the extreme bottom-left and top-right of the area.
  
  input:  table = ["+----+--+-----+----+",
                   "|abcd|56|!@#$%|qwer|",
                   "|1234|78|^&=()|tyui|",
                   "+----+--+-----+----+",
                   "|zxcv|90|77777|stop|",
                   "+----+--+-----+----+",
                   "|asdf|~~|ghjkl|100$|",
                   "+----+--+-----+----+"]
          and coords = [[2, 0], [1, 1]]
  output: solution(table, coords) = ["+----+--+-----+----+",
                                     "|abcd|56|!@#$%|qwer|",
                                     "|1234|78|^&=()|tyui|",
                                     "+----+--+-----+----+",
                                     "|zxcv 90|77777|stop|",
                                     "|       +-----+----+",
                                     "|asdf ~~|ghjkl|100$|",
                                     "+-------+-----+----+"]
*/

vector<string> solution(vector<string> table, vector<vector<int>> coords) {
    vector<int> row, col;
    int x = 0, y = 0;
    
    //count row
    for(auto r: table) { 
        if (r[0] == '+') 
            row.push_back(x); 
        ++x; 
    }
    
    //count col
    for(auto c: table[0]) { 
        if (c =='+') 
            col.push_back(y); 
        y++; 
    }
    
    //find the coordinates of the rectangular
    int y1, y2, x1, x2;
    y1 = row[min(coords[0][0], coords[1][0])];
    y2 = row[max(coords[0][0], coords[1][0]) + 1];
    x1 = col[min(coords[0][1], coords[1][1])];
    x2 = col[max(coords[0][1], coords[1][1]) + 1];
    
    for (int i = y1 + 1; i < y2; ++i) {
        for (int j = x1 + 1; j < x2; ++j) {
            if (table[i][j] == '-'|| table[i][j] == '|' || table[i][j] == '+') 
                table[i][j] = ' ';
            if (y1 == 0) 
                table[y1][j] = '-';
            if (y2 == table.size() - 1) 
                table[y2][j] = '-';
        }
        if (x1 == 0) 
            table[i][x1]='|';
        if (x2 == table[0].length() - 1) 
            table[i][x2]='|';
    }
    return table;
}
