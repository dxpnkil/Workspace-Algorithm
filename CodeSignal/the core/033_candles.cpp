/*
  When a candle finishes burning it leaves a leftover. 
  makeNew leftovers can be combined to make a new candle, when burning down, will in turn leave another leftover.
  You have solutionNumber solution in your possession. 
  What's the total number of solution you can burn, assuming that you create new solution as soon as you have enough leftovers?
  
  input:  solutionNumber = 5 and makeNew = 2
  output: solution(solutionNumber, makeNew) = 9
*/

int solution(int candlesNumber, int makeNew) {
    
    int res = candlesNumber;
    int leftover = candlesNumber;
    
    while (leftover >= makeNew) {
        int temp = leftover / makeNew;
        res += temp;
        leftover -= temp * makeNew;
        leftover += temp;
    }
    return res;
}
