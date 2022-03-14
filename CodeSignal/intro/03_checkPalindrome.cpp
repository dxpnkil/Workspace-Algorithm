/*
    Given the string, check if it is a palindrome.
    
    input:  inputString = "aabaa"
    output: checkPalindrome(inputString) = true
*/

bool checkPalindrome(string inputString) {
    bool flag = true;
    int low, high;
    high = inputString.length() - 1;
    low = 0;
    
    while(high > low){
        if( inputString[high] != inputString[low]){
            flag = false;
            break;
        }
        high--;
        low++;
    }
    return flag;
}

