/*
  You're a crossword fanatic, and have finally decided to try and create your own. 
  However, you also love symmetry and good design, so you come up with a set of rules they should follow:

    the crossword must contain exactly four words;
    these four words should form four pairwise intersections;
    all words must be written either left-to-right or top-to-bottom;
    the area of the rectangle formed by empty cells inside the intersections isn't equal to zero.
  Given 4 words, find the number of ways to make a crossword following the above-described rules. Note that two crosswords which differ by rotation are considered different.
  
  input:  words = ["crossword", "square", "formation", "something"]
  output: solution(words) = 6
  
  solution: https://www.youtube.com/watch?v=xQdITG3NuWA&list=PLTtD0b7yyEv20-j54OYUK1Nx83jZ9dKyd&index=51
*/

int attempt(vector<string>& words) {
    int res = 0;
    for (int i = 0; i < words[0].length(); i++)
    for (int j = 0; j < words[1].length(); j++) {
        if (words[0][i] == words[1][j]) {
            for (int k = j+2; k < words[1].length(); k++)
            for (int l = 0; l < words[2].length(); l++) {
                if (words[1][k] == words[2][l]) {
                    for (int x = l+2; x < words[2].length(); x++)
                    for (int y = 0; y < words[3].length(); y++) {
                        if (words[2][x] == words[3][y]) {
                            int w = k - j;
                            int h = x - l;
                            if (y - w >= 0 && i + h < words[0].length()) {
                                if (words[3][y - w] == words[0][i + h])
                                    res++;
                            }
                        }
                    }
                }
            }
        }   
    }
    return res;
}

int solution(vector<string> words) {
    sort(words.begin(), words.end());
    int res = 0;
    do {
        res += attempt(words);
    } while (next_permutation(words.begin(), words.end()));
    
    return res;
}
