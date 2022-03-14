/*
  Given a character, check if it represents an odd digit, an even digit or not a digit at all.
  
  input:  symbol = '5'
  output: solution(symbol) = "odd"
*/

string solution(char symbol) {
    if(symbol < 48 || symbol > 57)
        return "not a digit";
    else {
        if(symbol % 2 == 0)
            return "even";
        else return "odd";
    }
}
