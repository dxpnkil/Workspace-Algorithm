/*
  An alphanumeric ordering of strings is defined as follows: each string is considered as a sequence of tokens, where each token is a letter or a number
  For example, the tokens of the string "ab01c004" are [a, b, 01, c, 004]
  In order to compare two strings, we'll first break them down into tokens and then compare the corresponding pairs of tokens with each other.
  Here is how tokens are compared:
    If a letter is compared with another letter, the usual alphabetical order applies.
    A number is always considered less than a letter.
    When two numbers are compared, their values are compared. Leading zeros, if any, are ignored.
 
  input:  s1 = "b" and s2 = "a1"
  output: solution(s1, s2) = false.
  Since b is greater than a, s1 is larger.
*/

int readNum(string& s, int& i) {
    int res = 0;
    for(;i < s.size() && isdigit(s[i]); i++)
        res = res * 10 + s[i]-'0';
    return res;
}
bool comp(string s1, string s2, bool& done, bool checkZero) {
    int i = 0, j = 0;
    while (i < s1.size() || j < s2.size()) {
        if (i == s1.size() || j == s2.size()) 
            return j != s2.size(); 
            
        if (!isalpha(s1[i]) && !isalpha(s2[j])) {
            int i0 = i, j0 = j;
            int x1 = readNum(s1, i);
            int x2 = readNum(s2, j);
            if (x1 != x2)
                return x1 < x2;
                
            if (checkZero && i-i0 != j-j0)
                return i-i0 > j-j0;
        } else {
            if (s1[i] != s2[j]) 
                return isdigit(s1[i]) || s1[i] < s2[j];
            i++; 
            j++;
        }
    }
    done = false;
    return false;
}
bool solution(string s1, string s2) {
    bool done = true;
    bool res = comp(s1, s2, done, false);
    if (!done) {
        done = true;
        res = comp(s1, s2, done, true);
    }
    return res;
}
