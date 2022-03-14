/*
  Using the bike's timer, calculate the current time. Return an answer as the sum of digits that the digital timer in the format hh:mm would show.
  
  Since 240 minutes have passed, the current time is 04:00. The digits sum up to 0 + 4 + 0 + 0 = 4, which is the answer.
  input:  n = 240
  output: solution(n) = 4
*/

int solution(int n) {
    int h = n / 60;
    int m = n % 60;
    return h / 10 + h % 10 + m % 10 + m / 10;
}

  
