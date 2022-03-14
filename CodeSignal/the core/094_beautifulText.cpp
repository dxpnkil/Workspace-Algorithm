/*
  Call a multiline text beautiful if and only if each of its lines contains an equal number of characters. 
  Call the length of the line the text width.
  
  Given a string and some integers l and r (l ≤ r), check if it's possible to obtain a beautiful text from the string with a text width that's within the range [l, r].
  
  input:  InputString = "Look at this example of a correct text", l = 5, and r = 15
  output: solution(inputString, l, r) = true
*/

bool solution(string inputString, int l, int r) {
    for(int i = l; i <= r; i++){
        if( (inputString.length()+1 ) % (i+1) == 0){
            bool check = true;
            for(int j= i; j< inputString.length(); j+= i+1){
                if(inputString[j] != ' '){
                    check = false;
                    break;
                }
            }
            if(check)
                return true;
        }
    }
    return false;
}
