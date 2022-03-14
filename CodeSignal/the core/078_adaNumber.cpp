/*
  Your task is to determine whether the given string is Ada number
  
  input:  line = "16#123abc#"
  output: solution(line) = true
  
*/

bool solution(string line) {
    
    line.erase(remove(begin(line), end(line), '_'), end(line));
    transform(begin(line), end(line), begin(line), ::tolower);
    
    smatch match;
    int base = 10;
    return regex_match(line, match, regex("([0-9]+)(#[0-9a-f]+#|)"))
        && (!match.length(2) || (base = stoi(match.str(1))) >= 2 && base <= 16)
        && match.str(2).find_first_not_of("fedcba9876543210#" + 16 - base) == -1;
}
