/*
  Call two arms equally strong if the heaviest weights they each are able to lift are equal.
  Call two people equally strong if their strongest arms are equally strong (the strongest arm can be both the right and the left), and so are their weakest arms.
  Given your and your friend's arms' lifting capabilities find out if you two are equally strong.
  
  input:  yourLeft = 10, yourRight = 15, friendsLeft = 15, friendsRight = 10
  output: areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight) = true
*/

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    
    int yMin = min(yourLeft, yourRight); 
    int yMax = max(yourLeft, yourRight); 
    
    int fMin = min(friendsLeft, friendsRight);
    int fMax = max(friendsLeft, friendsRight); 
    
    if (yMax == fMax && yMin == fMin) return true;
    else return false;
}
