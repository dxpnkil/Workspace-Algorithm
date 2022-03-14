/*
  Consider the following ciphering algorithm:
  For each character replace it with its code.
  Concatenate all of the obtained numbers.
  Given a ciphered string, return the initial one if it is known that it consists only of lowercase letters.
  
  input:  cipher = "10197115121"
  output: solution(cipher) = "easy"
*/

string solution(string cipher) {
    string res;
    for (int i = 0; i < cipher.length();) {
        int l;
        if ( cipher[i] == '1')
            l = 3;
        else l = 2;
        res += (char)stoi(cipher.substr(i, l));
        i += l;
    }
    return res;
}
