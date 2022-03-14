/*
  Some phone usage rate may be described as follows:

    first minute of a call costs min1 cents,
    each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
    each minute after 10th costs min11 cents.
  You have s cents on your account before the call. What is the duration of the longest call (in minutes rounded down to the nearest integer) you can have?
  
  input:  min1 = 3, min2_10 = 1, min11 = 2, and s = 20
  output: solution(min1, min2_10, min11, s) = 14
*/

int solution(int min1, int min2_10, int min11, int s) {
    if(s >= (min2_10 * 9 + min1))
        return 1 + 9 + (s- (min2_10 * 9 + min1) ) / min11;
    else if ( s >= (min1)) 
        return 1 + (s - min1) / min2_10;
    else return 0;
}
