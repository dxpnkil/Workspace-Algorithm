/*
  Given an array of integers, replace all the occurrences of elemToReplace with substitutionElem.
  
  input:  inputArray = [1, 2, 1], elemToReplace = 1, and substitutionElem = 3
  output: arrayReplace(inputArray, elemToReplace, substitutionElem) = [3, 2, 3]
*/

vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for (int i = 0; i < inputArray.size(); i++){
        if (elemToReplace == inputArray[i])
            inputArray[i] = substitutionElem;
    }
    return inputArray;
}
