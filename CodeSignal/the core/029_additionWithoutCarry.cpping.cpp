/*
  A little child is studying arithmetic. They have just learned how to add two integers, written one below another, column by column. 
  But the child always forgets about the important part - carrying.
  Given two integers, your task is to find the result that the child will get.
  
  input:  param1 = 456 and param2 = 1734, the output should be
  output: solution(param1, param2) = 1180
*/

int solution(int param1, int param2) {
    int res = 0;
    int j = 0;
    while(param1 != 0 || param2 != 0){
        res += (param1%10 + param2%10)%10 * pow(10, j) ;
        param1 /= 10;
        param2 /= 10;
        j++;
    }
    return res;
}
