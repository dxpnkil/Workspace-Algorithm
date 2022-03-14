/*
  Some file managers sort filenames taking into account case of the letters, others compare strings as if all of the letters are of the same case. 
  That may lead to different ways of filename ordering.
  Call two filenames an unstable pair if their ordering depends on the case.
  
  input:  filename1 = "aa" and filename2 = "AAB"
  output: solution(filename1, filename2) = true
    Because "AAB" < "aa", but "AAB" > "AA".
*/

bool solution(string filename1, string filename2) {
    string s1 = filename1;
    string s2 = filename2;
    for (int i = 0; i < s1.size(); ++i)
        s1[i] = tolower(s1[i]);
    
    for (int i = 0; i < s2.size(); ++i)
        s2[i] = tolower(s2[i]);
    
    return s1 < s2 != filename1 < filename2;
}
