/*
  You find yourself in Bananaland trying to buy a banana. 
  You are super rich so you have an unlimited supply of banana-coins, but you are trying to use as few coins as possible.
  
  input:  coins = [1, 2, 10] and price = 28
  output: solution(coins, price) = 6
*/

int solution(vector<int> coins, int price) {
    int res = 0;
    for(int i = coins.size() - 1; i >= 0; i--){
        if(price / coins[i] != 0)
            res += price / coins[i];
        price = price % coins[i];
    }
    return res;
}
