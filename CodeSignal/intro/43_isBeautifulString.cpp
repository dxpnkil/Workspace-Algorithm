/*
  A string is said to be beautiful if each letter in the string appears at most as many times as the previous letter in the alphabet within the string; 
  Given a string, check whether it is beautiful.
  
  input:  inputString = "bbbaacdafe"
  output: isBeautifulString(inputString) = true
*/

bool isBeautifulString(string inputString) {
    int s[26] = {0,};
    for(char c: inputString)
        s[c - 'a']++;
    return is_sorted(rbegin(s), rend(s));
}
