/*
  A sentence is considered correct if:
    it starts with a capital letter;
    it ends with a full stop, question mark or exclamation point ('.', '?' or '!');
    full stops, question marks and exclamation points don't appear anywhere else in the sentence.
  Given a sentence, return true if it is correct and false otherwise.
  
 input:   sentence = "This is an example of *correct* sentence."
 output:  solution(sentence) = true
*/

bool solution(std::string sentence) {
  std::regex regex("[A-Z][^.?!]*[.?!]");
  return std::regex_match(sentence, regex);
}
