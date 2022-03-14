/*
  input:  a = [24, 85, 0]
  output: solution(a) = 21784.

  An array [24, 85, 0] looks like [00011000, 01010101, 00000000] in binary.
  After packing these into one number we get 00000000 01010101 00011000 (spaces are placed for convenience), which equals to 21784
*/

int solution(vector<int> a) {
    int res = 0;
    for (int i = a.size() - 1; i >= 0; --i) {
        res <<= 8;
        res += a[i];
    }    
    return res;
}
