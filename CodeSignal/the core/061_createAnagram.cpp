/*
  You are given two strings s and t of the same length, consisting of uppercase English letters. 
  Your task is to find the minimum number of "replacement operations" needed to get some anagram of the string t from the string s. 
  A replacement operation is performed by picking exactly one character from the string s and replacing it by some other character.
  
  input:  string s = "ABA", string t = "BAB"
  ouput:  solution(s, t) = 1
*/

int solution(string s, string t) {
    
    int n = s.size();
    map <char, int> mapS;
    for(int i = 0; i < s.size(); i++)
        mapS[s[i]]++;
        
    int res = n;
    map <char, int> mapT;
    for(int i = 0; i < t.size(); i++)
        mapT[t[i]]++;
        
    map <char, int> :: iterator it = mapS.begin();
    while(it != mapS.end()){
        int x = min(it->second, mapT[it->first]);
        res -= x;
        it++;
    }
    return res;
}
