/*
  You're given a substring s of some cyclic string. 
  What's the length of the smallest possible string that can be concatenated to itself many times to obtain this cyclic string?
  
  input:  s = "cabca"
  output: s = solution(s) = 3
*/

int solution(string s) {
    for(int i= 1; i< s.length(); i++) {
        bool flag = true;
        for(int pos= 0; pos+i< s.length(); pos++) {
            if(s[pos] != s[pos + i]) {
                flag = false;
                break;
            }
        }
        if(flag) 
            return i;
    }
    return s.length();
}
