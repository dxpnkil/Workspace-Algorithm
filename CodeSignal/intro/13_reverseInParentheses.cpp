/*
  Write a function that reverses characters in (possibly nested) parentheses in the input string.
  Input strings will always be well-formed with matching ()s.
  
  input:  inputString = "(bar)"
  output: reverseInParentheses(inputString) = "rab"
*/

string reverseInParentheses(string inputString) {
    
    stack<int> strTemp;
    int len = inputString.length();
    for (int i = 0; i < len; i++) {

        if (inputString[i] == '(') {
            strTemp.push(i);
        }
        else if (inputString[i] == ')') {
            reverse(inputString.begin() + strTemp.top() + 1,
                    inputString.begin() + i);
            strTemp.pop();
        }
    }
    string res = "";
    for (int i = 0; i < len; i++) {
        if (inputString[i] != ')' && inputString[i] != '(')
            res += (inputString[i]);
    }
    return res;
}
