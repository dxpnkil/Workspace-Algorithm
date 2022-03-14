/*
  Since you grew the plant from a seed, it started at height 0 initially. 
  Given an integer desiredHeight, your task is to find how many days it'll take for the plant to reach this height.
  
  input:  upSpeed = 100, downSpeed = 10, and desiredHeight = 910
  output: growingPlant(upSpeed, downSpeed, desiredHeight) = 10
*/

int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int res = 0; 
    int height = 0;
    while( height < desiredHeight) {
        res++;
        height += upSpeed;
        if(height >= desiredHeight)
            return res;
        height -= downSpeed;
    }
    return res;
}
