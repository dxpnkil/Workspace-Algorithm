/*
  Given a string which represents a valid arithmetic expression, 
    find the index of the character in the given expression corresponding to the arithmetic operation which needs to be computed first.
    
  input:  expr = "(2 + 2) * 2"
  output: expr = "(2 + 2) * 2"
*/

int solution(string expr) {
    int index = 0;
    int maxPrio = 0, prio = 0;
    
    for (int i = 0; i < expr.length(); ++i) {
        int d = 0;
        
        switch (expr[i]) {
            case '(': prio += 3; break;
            case ')': prio -= 3; break;
            case '+':
            case '-': d = 1; break;
            case '*':
            case '/': d = 2; break;
        }
        if (prio + d > maxPrio) {
            maxPrio = prio + d;
            index = i;
        }
    }
    return index;
}
