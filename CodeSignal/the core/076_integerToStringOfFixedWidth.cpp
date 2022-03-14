/*
  Given a positive integer number and a certain length, we need to modify the given number to have a specified length. 
  We are allowed to do that either by cutting out leading digits (if the number needs to be shortened) or by adding 0s in front of the original number.
  
  input:  number = 1234 and width = 2
  output: solution(number, width) = "34"
*/

string solution(int number, int width) {
    string res = to_string(number);
    
    if (width > res.size())
      return string(width - res.size(), '0') + res;
    res.erase(0, res.size() - width);
    return res;
}
