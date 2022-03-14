/*
  A rectangle with sides equal to even integers a and b is drawn on the Cartesian plane. 
  Its center (the intersection point of its diagonals) coincides with the point (0, 0), but the sides of the rectangle are not parallel to the axes; 
  instead, they are forming 45 degree angles with the axes.
  How many points with integer coordinates are located inside the given rectangle (including on its sides)?
  
  input:  a = 6 and b = 4
  output: solution(a, b) = 23
*/

int solution(int a, int b) {
    double aHalf = a / sqrt(2) / 2;
    double bHalf = b / sqrt(2) / 2;
    int rect1 = ((int)aHalf * 2 + 1) * ((int)bHalf * 2 +1);
    
    int sizeRect2[2];
    if( (double)a/2 - floor(aHalf)*sqrt(2) < sqrt(2)/2)
        sizeRect2[0] = (int)aHalf * 2;
    else sizeRect2[0] = ((int)aHalf + 1) * 2;
    
    if( (double)b/2 - floor(bHalf)*sqrt(2) < sqrt(2)/2)
        sizeRect2[1] = (int)bHalf * 2;
    else sizeRect2[1] = ((int)bHalf + 1) * 2;
    
    int rect2 = sizeRect2[0] * sizeRect2[1];
    
    return rect1 + rect2;
}
