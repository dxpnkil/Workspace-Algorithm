/*
  Given a code written in JavaScript and its args, adds a $ sign in front of each args[i] (unless there is already a dollar sign present).
  Given a code in JavaScript and its args, return the almost-PHP solution.
  
  input:  code = 
            "function add($n, m) {\t
               return n + $m;\t
             }"
        and args = ["n", "m"]
  output: solution(code, args) =
            "function add($n, $m) {\t
               return $n + $m;\t
             }"
*/

std::string solution(std::string code,
                     std::vector<std::string> args) {
  std::string argumentVariants = "";
  for (size_t i = 0; i < args.size(); i++) {
    argumentVariants += args[i];
    if (i < args.size() - 1) {
      argumentVariants += "|";
    }
  }

  std::regex regex("([^$])\\b(" + argumentVariants + ")\\b");
  std::string fmt = "$1$$$2";
  return std::regex_replace(code, regex, fmt);
}
