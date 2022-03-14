/*
  You've been invited to a job interview at a famous company that tests programming challenges. 
  To evaluate your coding skills, they have asked you to parse a given problem's input given as an inputString string, and count the number of primitive type elements within it.
  
  input:  inputString = "[[0, 20], [33, 99]]"
  output: solution(inputString) = 4
*/

int solution(string inputString) {
    std::regex expr("\"[^\"]*\"|\\d+|true|false");
    return std::distance(std::sregex_iterator(
        inputString.begin(), inputString.end(), expr), std::sregex_iterator());
}
