/*
  Given a string, your task is to replace each of its characters by the next one in the English alphabet; i.e. 
  replace a with b, replace b with c, etc (z would be replaced by a)
  
  Input:  inputString: "crazy"
  Output: alphabeticShift(inputString) = "dsbaz"
*/

string alphabeticShift(string inputString) {
    int len = inputString.length();
    for(int i = 0; i< len; i++){
        if(inputString[i] == 'z'){
            inputString[i] = 'a';
        }
        else{
            inputString[i] = inputString[i] + 1;
        }
    }
    return inputString;
}
