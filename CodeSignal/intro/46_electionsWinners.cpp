/*
  Elections are in progress!
  Given an array of the numbers of votes given to each of the candidates so far, and an integer k equal to the number of voters who haven't cast their vote yet, 
  find the number of candidates who still have a chance to win the election.
  The winner of the election must secure strictly more votes than any other candidate. 
  If two or more candidates receive the same (maximum) number of votes, assume there is no winner at all.
  
  input:  votes = [2, 3, 5, 2] and k = 3
  output: electionsWinners(votes, k) = 2
*/

int electionsWinners(vector<int> votes, int k) {
    int res = 1;
    sort(begin(votes), end(votes));
    int sz = votes.size();
    if(k == 0){
        if(votes[sz - 1] == votes[sz - 2])
            return 0;
        else return 1;
    }
    for(int i = 0; i < sz - 1 ; i++){
        if(votes[i] + k > votes[sz - 1])
            res+=1;
    }
    return res;
}
