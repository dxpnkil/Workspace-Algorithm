/*
  Given a string, find the number of different characters in it.

  input:  s = "cabca"
  output: differentSymbolsNaive(s) = 3
*/

int differentSymbolsNaive(string s) {
    map<char,int>ch;
    for(int i=0; i<s.length(); i++)
        ch[s[i]] ++;
    return ch.size();
}
