/*
  Given an integer product, find the smallest positive (i.e. greater than 0) integer the product of whose digits is equal to product. 
  If there is no such integer, return -1 instead.
  
  input:  product = 12
  output: digitsProduct(product) = 26
*/

int digitsProduct(int product) {
    int res;
    for (int i = 1; i < 10000; i++){
        string num = to_string(i);
        int temp = 1;
        for(auto c: num)
            temp *= c - 48;
        if(temp == product)
            return i;   
    }
    return -1; 
}
