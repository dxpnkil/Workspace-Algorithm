/*
  Define a word as a sequence of consecutive English letters. Find the longest word from the given string.
  
  input:  text = "Ready, steady, go!"
  output: longestWord(text) = "steady"
*/

string delNonLetter(string s){
    size_t found = s.find_first_not_of  ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ");
    while (found != std::string::npos){
        s.replace(found, 1, " ");
        found = s.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ");
    }
    return s;
}
string longestWord(string text) {
    string str = delNonLetter(text);
    string res;
    string word;
    int maxLen = 0;
    istringstream s(str);
    while ( s >> word ){
        if ( maxLen < word.size() ) { 
            maxLen = word.size();
            res = word;
        }                         
    }
    return res;
}
