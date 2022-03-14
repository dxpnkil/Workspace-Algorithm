/*
  Given a string, find the shortest possible string which can be achieved by adding characters to the end of initial string to make it a palindrome.
  
  input:  st = "abcdc"
  output: buildPalindrome(st) = "abcdcba"
*/

string rString(string s){
    int len = s.length();
    for(int i = 0; i < len/2; i++)
        swap(s[i], s[len - 1 - i]);
    return s;
}
bool checkPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i<j){
        if(s[i] != s[j])
            return false;
        i++; j--;
    }
    return true;
}
string buildPalindrome(string st) {
    string temp = rString(st);
    string res;
    int len = st.length();
    if(checkPalindrome(st))
        return st;
    else{
        for (int i = 0; i < len; i++){
            res = st + temp.substr(temp.size() - 1 - i);
            if (checkPalindrome(res))
                break;
        }
    }
    return res;
}
