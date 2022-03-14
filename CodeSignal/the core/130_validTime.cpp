/*
  Check if the given string is a correct time representation of the 24-hour clock.
  
  input:  time = "13:58"
  output: validTime(time) = true
*/

bool solution(string time) {
    string hour = time.substr(0,2);
    string minute = time.substr(3,2);
    
    int h = stoi(hour);
    int m = stoi(minute);
    
    if( h>23 || m >59)
        return false;
    return true;
    
}
