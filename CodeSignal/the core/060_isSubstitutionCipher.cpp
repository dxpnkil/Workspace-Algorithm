/*
  A ciphertext alphabet is obtained from the plaintext alphabet by means of rearranging some characters. 
  For example "bacdef...xyz" will be a simple ciphertext alphabet where a and b are rearranged.
  A substitution cipher is a method of encoding where each letter of the plaintext alphabet is replaced with the corresponding (i.e. having the same index)
                                                                                                                              letter of some ciphertext alphabet.
  Given two strings, check whether it is possible to obtain them from each other using some (possibly, different) substitution ciphers.
  
  input:  string1 = "aacb" and string2 = "aabc"
  ouput:  solution(string1, string2) = true
*/

bool check(string s1, string s2){
    vector <int> cipher(27,0);
    for(int i = 0; i < s1.size(); ++i){
        int current = s1[i] - 'a' + 1;
        int mapped = s2[i] - 'a' + 1;
        if (cipher[current] == 0) {
            cipher[current] = mapped;
            continue;
        }
        if (cipher[current] != mapped)
            return false;
    }
    return true;
}
bool solution(string string1, string string2) {
    return check(string1, string2) && check(string2, string1);
}
