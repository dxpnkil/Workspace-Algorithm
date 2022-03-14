/*
  Let's call two integers A and B friends if each integer from the array divisors is either a divisor of both A and B or neither A nor B. 
  If two integers are friends, they are said to be in the same clan. How many clans are the integers from 1 to k, inclusive, broken into?
  
  input:  divisors = [2, 3] and k = 6
  output: solution(divisors, k) = 4
*/

int solution(vector<int> divisors, int k) {
    map <int, int> m;
    int res = 0;
    int n = 0;
    for(int i = 1; i <=k; i++){
        n = 0;
        for(int j = 0; j < divisors.size(); j++){
            if(i % divisors[j] == 0)
                n = n | (1 << j);
        }
        if(m[n] != 1){
            m[n] = 1;
            res++;
        }
    } 
    return res;
}
