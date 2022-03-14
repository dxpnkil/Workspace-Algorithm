/*
  You found two items in a treasure chest! The first item weighs weight1 and is worth value1, and the second item weighs weight2 and is worth value2. 
  What is the total maximum value of the items you can take with you, assuming that your max weight capacity is maxW and you can't come back for the items later?
  
  input:  value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, and maxW = 8
  output: knapsackLight(value1, weight1, value2, weight2, maxW) = 10
*/

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    if (maxW < min(weight1 , weight2)) 
        return 0;
    if (maxW >= (weight1 + weight2) ) 
        return (value1+ value2);
    
    if (value1 > value2 && maxW >= weight1)
        return value1;
    if (maxW >= weight2)
        return value2;

    return value1;
    
}
