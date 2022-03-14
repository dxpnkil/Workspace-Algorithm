/*
  Given an array of 2k integers (for some integer k), perform the following operations until the array contains only one element
    On the 1st, 3rd, 5th, etc. iterations (1-based) replace each pair of consecutive elements with their sum;
    On the 2nd, 4th, 6th, etc. iterations replace each pair of consecutive elements with their product.
  After the algorithm has finished, there will be a single element left in the array. Return that element.
  
  input:  inputArray = [1, 2, 3, 4, 5, 6, 7, 8]
  output: solution(inputArray) = 186
*/

int solution(vector<int> inputArray) {
    int j = 1;
    for (int i = inputArray.size(); i > 1; i /= 2){
        for (int k = 0; k < i/2; k++) {
            int a = inputArray[2*k], b = inputArray[2*k+1];
            inputArray[k] = (j ? a + b : a * b);
        }
        j = (j + 1) % 2;
    }
  return inputArray[0];
}
