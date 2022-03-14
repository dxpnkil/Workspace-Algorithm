/*
  Miss X has only two solution in her possession, both of which are old and miss a tooth or two. 
  She also has many purses of different length, in which she carries the solution. 
  The only way they fit is horizontally and without overlapping. 
  Given teeth' positions on both solution, find the minimum length of the purse she needs to take them with her.
  
  input:  comb1 = "*..*" and comb2 = "*.*"
  output: solution(comb1, comb2) = 5
*/

int solution(string comb1, string comb2) {
    
    bitset<32> c1(comb1, 0, comb1.size(), '.', '*'), 
                c2(comb2, 0, comb2.size(), '.', '*'); 
    c1 <<= 10;
    
    int len;
    int res = INT_MAX;
    for(int i = 0; i < 20; i++){
        if( (c1 & c2) == 0 ){
            len = max(10 + comb1.size(), i + comb2.size()) - min(10, i);
            if(len < res)
                res = len;
        }
        c2 <<= 1;
    }
    return res;
}
