/*
  Given a string, output its longest prefix which contains only digits.
  
  input:  inputString = "123aa1"
  output: longestDigitsPrefix(inputString) = "123"
*/

string longestDigitsPrefix(string inputString) {
    string res;
    for(int i = 0; i < inputString.length(); i++){
        if(isdigit(inputString[i]))
            res += inputString[i];
        else return res;
    }
    return res;
}
