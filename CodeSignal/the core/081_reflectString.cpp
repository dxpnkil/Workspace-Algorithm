/*
  Define an alphabet reflection as follows: a turns into z, b turns into y, c turns into x, ..., n turns into m, m turns into n, ..., z turns into a.
  Define a string reflection as the result of applying the alphabet reflection to each of its characters.
  
  input:  inputString = "name"
  output: solution(inputString) = "mznv"
*/

string solution(string inputString) {
    string res = "";
    for(int i = 0;i < inputString.length(); i++)
        res += 219 - inputString[i];
    return res;
}
