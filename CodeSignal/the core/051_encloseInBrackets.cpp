/*
  Given a string, enclose it in round brackets.
  
  input:  inputString = "abacaba"
  output: solution(inputString) = "(abacaba)"
*/

string solution(string inputString) {
    string res = "()";
    res.insert(1,inputString);
    return res;
}
