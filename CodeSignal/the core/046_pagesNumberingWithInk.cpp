/*
  You work in a company that prints and publishes books. You are responsible for designing the page numbering mechanism in the printer. 
  You know how many digits a printer can print with the leftover ink. 
  Now you want to write a function to determine what the last page of the book is that you can number given the current page and numberOfDigits left. 
  A page is considered numbered if it has the full number printed on it
  
  input:  current = 1 and numberOfDigits = 5
  output: solution(current, numberOfDigits) = 5
*/

int countDigit(int n){
    int res = 0;
    while(n != 0){
        ++res;
        n /= 10;
    }      
    return res; 
}
int solution(int current, int numberOfDigits) {
    while (numberOfDigits >= countDigit(current)) {
        numberOfDigits -= countDigit(current);
        ++current;
    }
    return current-1;
}
