/*
  Your course lies west of your current location and crosses several time zones. 
  The pilot told you the exact schedule: it is known that you will take off at takeOffTime, and in minutes[i] after takeoff you will cross the ith border between time zones.
  You've been thinking about this situation and realized that it might be a good opportunity to celebrate New Year's Day more than once. 
  Assuming that you set your watch immediately after the border is crossed, how many times will you be able to celebrate this New Year's Day with a nice bottle of champagne?
  
  input:  takeOffTime = "23:35" and minutes = [60, 90, 140]
  output: solution(takeOffTime, minutes) = 3
*/

int solution(string takeOffTime, vector<int> minutes) {
    int h = stoi(takeOffTime.substr(0, 2));
    int m = stoi(takeOffTime.substr(3, 2));
    
    int time = h * 60 + m;
    
    int newyear = 24 * 60;
    if (time == 0) 
        time = newyear;
    
    int res = 0;
    int p = 0;
    for(auto a : minutes) {
        res += time == newyear;
        a -= p;
        if((time < newyear) && (time + a >= newyear))
            res++;
        time += a - 60;
        p += a;
    }
    if(time <= newyear)
        res++;
    return res;
}
