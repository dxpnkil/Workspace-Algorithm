/*
  Given an array of equal-length strings, you'd like to know if it's possible to rearrange the order of the elements 
  in such a way that each consecutive pair of strings differ by exactly one character. 
  Return true if it's possible, and false if not.
  
  input:  inputArray = ["ab", "bb", "aa"]
  output: stringsRearrangement(inputArray) = true
*/
 


bool check(vector<string> a){
    for(int i=1; i<a.size(); i++){
        int count = 0;
        for(int j=0; j<a[0].size(); j++){
            if(a[i][j] != a[i-1][j])
                count++;
        }
        if( count != 1)
            return false;
    }
    return true;
}

bool stringsRearrangement(vector<string> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    do{
        if(check(inputArray))
            return true;
    }while(next_permutation(inputArray.begin(), inputArray.end()));
    return false;
}
