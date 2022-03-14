/*
  Check if a given pair of lines in your text have an eye rhyme.
  An eye rhyme is a rhyme in which two words are spelled similarly but pronounced differently. 
  An example is the pair cough and bough; although they look similar, when they are spoken there is no rhyming quality.
  
  input:  pairOfLines = "cough\tbough"
  output: solution(pairOfLines) = true
*/

bool solution(std::string pairOfLines) {
  std::regex pattern("^.*(.{3})\t.*(.{3})$");
  std::smatch match;
  std::regex_search(pairOfLines, match, pattern);
  return match.str(1) == match.str(2);
}
