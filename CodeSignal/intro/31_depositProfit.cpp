/*
  input:  deposit = 100, rate = 20, and threshold = 170
  output: depositProfit(deposit, rate, threshold) = 3.

  Each year the amount of money in your account increases by 20%. So throughout the years, your balance would be:

  year 0: 100;
  year 1: 120;
  year 2: 144;
  year 3: 172.8.
  Thus, it will take 3 years for your balance to pass the threshold, so the answer is 3.
*/

int depositProfit(int deposit, int rate, int threshold) {
    double m = (double)(deposit);
    int res = 0;
    while (m < threshold){
        m += m * rate / 100;
        res++;
    }
    return res;
}
