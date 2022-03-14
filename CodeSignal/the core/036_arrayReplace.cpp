/*
  Given an array of integers, replace all the occurrences of elemToReplace with substitutionElem.
  
  input:  inputArray = [1, 2, 1], elemToReplace = 1, and substitutionElem = 3
  output: solution(inputArray, elemToReplace, substitutionElem) = [3, 2, 3]
*/

vector<int> solution(vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(int i = 0; i < inputArray.size(); i++){
        if(inputArray[i] == elemToReplace){
            inputArray.at(i) = substitutionElem;
        }
    }
    return inputArray;
}
