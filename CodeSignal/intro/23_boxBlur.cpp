/*
  input:  image = [[7, 4, 0, 1], 
                   [5, 6, 2, 2], 
                   [6, 10, 7, 8], 
                   [1, 4, 2, 0]]
  output: boxBlur(image) = [[5, 4], 
                            [4, 4]]
There are four 3 × 3 squares in the input image, so there should be four integers in the blurred output. 
To get the first value: (7 + 4 + 0 + 5 + 6 + 2 + 6 + 10 + 7) = 47 / 9 = 5.2222 = 5. 
The other three integers are obtained the same way, then the surrounding integers are cropped from the final result.
*/

vector<vector<int>> boxBlur(vector<vector<int>> image) {
    
    vector<vector<int>> res;
    int r = image.size();
    int c = image[0].size();
    
    for(int i=0; i<= r-3; i++){
        vector<int> row;
        for(int j = 0; j<= c-3; j++ ){
            int temp = 0;;
            for (int a = i; a < i+3; a++){
               for (int b = j; b < j + 3; b++){
                   temp += image[a][b]; 
               }
            }
            row.push_back(temp/9);
        }
        res.push_back(row);
    }
    return res;
}
