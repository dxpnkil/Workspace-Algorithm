/*
  Proper nouns always begin with a capital letter, followed by small letters.
  Correct a given proper noun so that it fits this statement.
  
  input:  noun = "pARiS"
  output: solution(noun) = "Paris"
*/

string solution(string noun) {
    for (int i = 1; i < noun.size(); ++i)
        noun[i] = tolower(noun[i]);
    noun[0] = toupper(noun[0]);
    return noun;
}
