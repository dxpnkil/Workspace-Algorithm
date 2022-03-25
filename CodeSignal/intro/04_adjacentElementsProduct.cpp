/*
    Given an array of integers, find the pair of adjacent
        elements that has the largest product and return that product.
    
    input:  inputArray = [3, 6, -2, -5, 7, 3]
    output: adjacentElementsProduct(inputArray) = 21
*/

int adjacentElementsProduct(vector<int> inputArray) {
    int res = -INT_MAX;
    for(int i = 0; i< n -1; i++){
        int temp = inputArray[i] * inputArray[i+1];
        res = max(res , temp);
    }
    return res;
}
