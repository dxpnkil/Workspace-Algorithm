/*
    Below we will define an n-interesting polygon. Your task is to find the area of a polygon for a given n
    
    A 1-interesting polygon is just a square with a side of length 1. An n-interesting polygon is obtained by
    taking the n - 1-interesting polygon and appending 1-interesting polygons to its rim, side by side. 
    
    input:  n = 5
    output: shapeArea(n) = 41
*/

int shapeArea(int n) {
    int res = 1;
    for ( int  i= 1; i<= n; i++)
        res = res + (i-1) *4;
    return res;
}

