/*
  You have been watching a video for some time. Knowing the total video duration find out what portion of the video you have already watched.
  
  input:  part = "02:20:00" and total = "07:00:00"
  output: solution(part, total) = [1, 3]
*/

vector<int> solution(string part, string total) {
    int partSec = stoi(part.substr(0,2))*3600 + stoi(part.substr(3,2))*60 + stoi(part.substr(6,2));
    int totalSec = stoi(total.substr(0,2))*3600 + stoi(total.substr(3,2))*60 + stoi(total.substr(6,2));
    return {partSec / gcd(partSec, totalSec), totalSec/ gcd(partSec, totalSec)};
}

