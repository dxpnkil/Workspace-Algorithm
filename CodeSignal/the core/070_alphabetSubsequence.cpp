/*
  Check whether the given string is a subsequence of the plaintext alphabet.
  
  input:  s = "effg"
  output: solution(s) = false
*/

bool solution(string s) {
    for(int i =0 ;i < s.length()-1;i++){
        if(s[i+1] <= s[i])
            return false;
    }
    return true;
}

