/*
  In tennis, the winner of a set is based on how many games each player wins. 
  The first player to win 6 games is declared the winner unless their opponent had already won 5 games, in which case the set continues until one of the players has won 7 games.
  Given two integers score1 and score2, your task is to determine if it is possible for a tennis set to be finished with a final score of score1 : score2.
  
  input:  score1 = 3 and score2 = 6
  output: solution(score1, score2) = true
*/

bool solution(int score1, int score2) {
    int test = max(score1, score2);
    if(test == 6) {
        if(abs(score1 - score2) <= 1)
            return false;
    }
    else if (test == 7) {
        if(abs(score1 - score2) > 2 || score1 == score2)
            return false;
    }
    else return false;
    return true;
        
}
