/*
  Given a string, check if it can become a palindrome through a case change of some (possibly, none) letters.
  
  input:  inputString = "AaBaa"
  output: inputString = "AaBaa"
*/

bool checkPalindrome(string inputString) {
    bool flag = true;
    int low, high;
    high = inputString.length() - 1;
    low = 0;
    
    while(high > low){
        if(inputString[high] != inputString[low]){
            flag = false;
            break;
        }
        high--;
        low++;
    }
    return flag;
}

bool solution(string inputString) {
    for(int i = 0; i< inputString.size(); i++)
        inputString[i] = tolower(inputString[i]);
    return checkPalindrome(inputString);
}
