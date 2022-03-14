/*
  Construct a square matrix with a size N × N containing integers from 1 to N * N in a spiral order, starting from top-left and in clockwise direction.
  
  input:  n = 3
  output: solution(n) = [[1, 2, 3],
                        [8, 9, 4],
                        [7, 6, 5]]
*/

vector<vector<int>> spiralNumbers(int n) {
    const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	int x = 0, y = -1, c = 0;
	vector<vector<int>> mt(n, vector<int>(n));
	for (int i = 0, im = 0; i < n + n - 1; ++i, im = i % 4) 
		for (int j = 0, jlen = (n + n - i) / 2; j < jlen; ++j)
			mt[x += dx[im]][y += dy[im]] = ++c;
    return mt;
}
