/*
  Given an array of integers, sort its elements by the difference of their largest and smallest digits. 
  In the case of a tie, that with the larger index in the array should come first.
  
  input:  a = [152, 23, 7, 887, 243]
  output: solution(a) = [7, 887, 23, 243, 152]
*/

vector<int> solution(vector<int> a) {
    auto diff = [](int a) {
        int minD = 9, maxD = 0;
        while(a > 0) {
            int x = a % 10;
            maxD = max(maxD, x);
            minD = min(minD, x);
            a /= 10;
        }
        return maxD - minD;
    };
    
    stable_sort(a.begin(), a.end(), [&diff](int a, int b) {
        return diff(a) <= diff(b);
    });    
    return a;
}
