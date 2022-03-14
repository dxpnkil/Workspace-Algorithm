/*
  Let's call product(x) the product of x's digits. 
  Given an array of integers a, calculate product(x) for each x in a, and return the number of distinct results you get.
  
  input:  a = [2, 8, 121, 42, 222, 23]
  output: a = [2, 8, 121, 42, 222, 23]
*/

int solution(vector<int> a) {
    set <int> s;
    for(auto n : a){
        int product = (n == 0 ? 0 : 1);
        while(n > 0){
            product *= n % 10;
            n /= 10;
        }
        s.insert(product);
    }
    return s.size();
}
