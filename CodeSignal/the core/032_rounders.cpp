/*
  We want to turn the given integer into a number that has only one non-zero digit using a tail rounding approach. 
  This means that at each step we take the last non 0 digit of the number and round it to 0 or to 10. 
  If it's less than 5 we round it to 0 if it's larger than or equal to 5 we round it to 10 (rounding to 10 means increasing the next significant digit by 1). 
  The process stops immediately once there is only one non-zero digit left.
  
  input:  n = 15
  output: solution(n) = 20
*/

int solution(int n) {
    int k = 0;
    while(n > 10){
        int x = n%10;
        if(x >= 5)
            n = n/10 + 1;
        else n = n/10;
        k++;
    }
    return n * pow(10,k);  
}   
