/*
  input:  a = [2, 4, 7]
  output: absoluteValuesSumMinimization(a) = 4.

  for x = 2, the value will be abs(2 - 2) + abs(4 - 2) + abs(7 - 2) = 7.
  for x = 4, the value will be abs(2 - 4) + abs(4 - 4) + abs(7 - 4) = 5.
  for x = 7, the value will be abs(2 - 7) + abs(4 - 7) + abs(7 - 7) = 8.
  The lowest possible value is when x = 4, so the answer is 4
*/

int absoluteValuesSumMinimization(vector<int> a) {
    int res;
    if(a.size() % 2 == 0)
        res = a[a.size() / 2 - 1];
    else res = a[a.size() / 2];
    return res;
}
