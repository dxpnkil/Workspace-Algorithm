/*
  You are given an array of integers representing coordinates of obstacles situated on a straight line.
  Assume that you are jumping from the point with coordinate 0 to the right. You are allowed only to make jumps of the same length represented by some integer.
  Find the minimal length of the jump enough to avoid all the obstacles.
  
  input:  inputArray = [5, 3, 6, 7, 9]
  output: avoidObstacles(inputArray) = 4
*/
 
int avoidObstacles(vector<int> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    
    int distJump = 1;
    bool flagJump = true;
 
    while(flagJump){
        
        flagJump = false;
        distJump += 1;
        for (auto i:inputArray){
            if (i % distJump == 0){
                  flagJump = true;
                  break;
            }
        }
    }
 
    return distJump;
}
