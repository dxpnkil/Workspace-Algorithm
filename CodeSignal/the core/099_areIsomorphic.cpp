/*
  Two two-dimensional arrays are isomorphic if they have the same number of rows and each pair of respective rows contains the same number of elements.
  Given two two-dimensional arrays, check if they are isomorphic.
  
  input:array1 = [[1, 1, 1],
          [0, 0]]
        and

        array2 = [[2, 1, 1],
                  [2, 1]]
  output: solution(array1, array2) = true
*/

bool solution(vector<vector<int>> array1, vector<vector<int>> array2) {
    if(array1.size() != array2.size())
        return false;
    int i = 0;
    while( i < array1.size()){
        if (array1[i].size() != array2[i].size())
            return false;
        i++;
    }
    return true;
}

