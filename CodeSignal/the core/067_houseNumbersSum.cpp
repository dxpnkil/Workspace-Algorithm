/*
  A boy is walking a long way from school to his home. 
  To make the walk more fun he decides to add up all the numbers of the houses that he passes by during his walk.
  At some point during the walk the boy encounters a house with number 0 written on it, 
  which surprises him so much that he stops adding numbers to his total right after seeing that house.
  For the given sequence of houses determine the sum that the boy will get. 
  
  input:  inputArray = [5, 1, 2, 3, 0, 1, 5, 0, 2]
  output: solution(inputArray) = 11
*/

int solution(vector<int> inputArray) {
    int res = 0;
    for(int i = 0; i< inputArray.size(); i++){
        if(inputArray[i] == 0)
            return res;
        else res += inputArray[i];
    }
    return res;
}

  
  
