/*
  All the digits in it are replaced with letters and vice versa. 
  Digit 0 is replaced with 'a', 1 is replaced with 'b' and so on, with digit 9 replaced by 'j'
  
  input:  note = "you'll n4v4r 6u4ss 8t: cdja"
  output: note = "you'll n4v4r 6u4ss 8t: cdja"
*/

string solution(string note) {
    for(auto &c: note){
        if ( c >= 97 && c <= 106 )
            c = c - 'a' + '0';
        else if ( c >= '0' && c <= '9')
            c = c - '0' + 'a';
    }
    return note;
}
