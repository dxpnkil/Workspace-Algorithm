/*
  Determine whether the given string can be obtained by one concatenation of some string to itself.
  
  input:  inputString = "tandemtandem"
  output: solution(inputString) = true
*/

bool solution(string inputString) {
    int sz = inputString.size();
    if(sz % 2 == 1)
        return 0;
    string half = inputString.substr(0, sz/2);
    return inputString == half + half;
}
