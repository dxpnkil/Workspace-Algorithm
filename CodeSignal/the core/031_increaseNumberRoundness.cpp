/*
  Define an integer's roundness as the number of trailing zeroes in it.
  Given an integer n, check if it's possible to increase n's roundness by swapping some pair of its digits
  
  input:  n = 902200100
  output: solution(n) = true
  One of the possible ways to increase roundness of n is to swap digit 1 with digit 0 preceding it: roundness of 902201000 is 3, and roundness of n is 2.
  For instance, one may swap the leftmost 0 with 1.
*/

bool solution(int n) {
    bool flag = true;
    while(n!= 0){
        if(flag){
            if(n%10 != 0)
                flag = false;
        }
        else{
            if(n%10 == 0)
                return true;
        }    
        n /= 10;
    }
    return false;
}
