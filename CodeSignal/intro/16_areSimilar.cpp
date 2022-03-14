/*
  Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.
  Given two arrays a and b, check whether they are similar.
  
  Any swap of any two elements either in a or in b won't make a and b equal
  
  input:  a = [1, 2, 3] and b = [2, 1, 3]
  output: areSimilar(a, b) = true
*/

bool areSimilar(vector<int> a, vector<int> b) {
    
    int count = 0;
    set<int> setA;
    set<int> setB;
    
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            count++;
            setA.insert(a[i]);
            setB.insert(b[i]);
        }
    }
    
    if (count == 0) 
        return true;
    else if (count == 2 && setA == setB)
        return true;
    
    return false;
}
