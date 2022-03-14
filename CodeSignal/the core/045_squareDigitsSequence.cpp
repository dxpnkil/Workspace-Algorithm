/*
  Consider a sequence of numbers a0, a1, ..., an, in which an element is equal to the sum of squared digits of the previous element. 
  The sequence ends once an element that has already been in the sequence appears again.
  Given the first element a0, find the length of the sequence.
  
  input:  a0 = 16
  output: solution(a0) = 9
*/

int solve(int x){
    int temp;
    int res = 0;
    while (x != 0) {
        temp = x % 10;
        res += temp * temp;
        x /= 10;
    }
    return res;
}

int solution(int a0) {
    set<int> s;
    s.insert(a0);
    a0 = solve(a0);
    while (s.find(a0) == s.end() ) {
        s.insert(a0);
        a0 = solve(a0);
    }    
    return s.size() + 1;
}
