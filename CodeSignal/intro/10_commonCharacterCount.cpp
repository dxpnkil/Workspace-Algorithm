/*
    Given two strings, find the number of common characters between them.

    input:  s1 = "aabcc" and s2 = "adcaa"
    output: commonCharacterCount(s1, s2) = 3
*/

int commonCharacterCount(string s1, string s2) {
    
    int f1[26] = { 0 };
    int f2[26] = { 0 };
    int  c = 0;
    for (int i = 0; i < s1.length(); i++){
        f1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++){
        f2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        c += (min(f1[i], f2[i]));
    }
    return c;
}
