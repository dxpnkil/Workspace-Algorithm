/*
  Given a string, find out if its characters can be rearranged to form a palindrome.


  input:  inputString = "aabb"
  output: palindromeRearranging(inputString) = true.

  We can rearrange "aabb" to make "abba", which is a palindrome.
*/

bool palindromeRearranging(string inputString) {
        map< char, int > strMap;
    int len = inputString.length();
    
    for (int i = 0; i < len; i++){
        strMap[inputString[i]]++;
    }
    
    int count = 0;
    for (auto& a: strMap){
        if (a.second % 2 != 0) count++;
    }
    
    if (count > 1) return false;
    if (len % 2 != 0 && count == 1) 
        return true;
    else return true;
}
