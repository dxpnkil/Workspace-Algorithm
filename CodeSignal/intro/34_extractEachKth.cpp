/*
  Given array of integers, remove each kth element from it.
  
  input:  inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and k = 3
  output: extractEachKth(inputArray, k) = [1, 2, 4, 5, 7, 8, 10]
*/

vector<int> extractEachKth(vector<int> inputArray, int k) {
    int delEle = k - 1;
    int multi = 2;
    while (delEle < inputArray.size()){
        inputArray.erase(inputArray.begin() + delEle);
        delEle = multi * (k - 1) ;
        multi++;
    }
    return inputArray;
}
