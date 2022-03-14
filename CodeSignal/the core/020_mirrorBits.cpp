/*
  Reverse the order of the bits in a given integer.

  input:  a = 97
  output: solution(a) = 67.

  97 equals to 1100001 in binary, which is 1000011 after mirroring, and that is 67 in base 10
*/

int solution(int a) {
    string s;
    int res = 0;
    while(a != 0){
       s.push_back( (a%2) + '0' );
       a /= 2; 
    }
    reverse(s.begin(), s.end());
    for(int i = s.size()-1 ; i>=0; --i)
        res += (s[i] - '0') << i;
    return res;
}
