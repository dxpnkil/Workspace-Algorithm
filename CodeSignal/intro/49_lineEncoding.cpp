/*
  Given a string, return its encoding defined as follows
  input:  s = "aabbbc"
  output: lineEncoding(s) = "2a3bc"
*/

string lineEncoding(string s) {
    string res = "";
    int temp = 1;
    for(int i = 0; i< s.length(); i++){
        if(s[i] == s[i+1])
            temp++;
        else{
            if(temp == 1)
                res += s[i];
            else{
                string str = to_string(temp);
                res += (str + s[i]);
            }
            temp = 1;        
        }
    }
    return res;
}
