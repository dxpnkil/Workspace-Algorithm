/*
  Given two strings a and b, both consisting only of lowercase English letters, 
  your task is to calculate how many strings equal to a can be constructed using only letters from the string b? 
  Each letter can be used only once and in one string only.
  
  input:  a = "abc" and b = "abccba"
  output: solution(a, b) = 2
*/

int solution(string a, string b) {
    int res = b.size();
    
    for(int i = 0; i < 26; i++){
        int letterA = count(a.begin(), a.end(), 'a' + i);
        int letterB = count(b.begin(), b.end(), 'a' + i);
        
        if(!letterA)
            continue;
        res = min(res, letterB / letterA);    
    }
    return res;
}
