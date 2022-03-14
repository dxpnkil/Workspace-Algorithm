/*
  The teacher assigned you the following numeral system exercise: given a one-digit number, 
      you should find all unordered pairs of one-digit numbers whose values add up to the number.
  
  input:  number = 'G'
  output: solution(number) = ["A + G", "B + F", "C + E", "D + D"]
*/

vector<string> solution(char number) {
    vector<string> res;
    for (int i = 0; i < 26; ++i) {
        for (int j = i; j < 26; ++j) {
            if (i + j == (number - 'A')) {
                string temp;
                temp += 'A' + i;
                temp += " + ";
                temp += 'A' + j;
                res.push_back(temp);
                break;
            }
        }
    }
    return res;
}
