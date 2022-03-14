/*
  You just ran out of days on the card, and unfortunately you've forgotten how many times your pass has been extended so far. 
  However, you do remember the number of days you were able to ride the Metro during this most recent month. 
  Figure out the number of days by which your pass will now be extended, and return all the options as an array sorted in increasing order.
  
  input:  lastNumberOfDays = 30
  output: solution(lastNumberOfDays) = [31]
*/

vector<int> solution(int lastNumberOfDays) {
    vector <int> res;
    if (lastNumberOfDays == 30)
        res.push_back(31);
    if (lastNumberOfDays == 31){
        res.push_back(28);
        res.push_back(30);
        res.push_back(31);
    }
    if (lastNumberOfDays == 28)
        res.push_back(31);
    return res;
}
