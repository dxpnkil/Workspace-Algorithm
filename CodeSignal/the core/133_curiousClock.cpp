/*
  Indeed, the clock did surprise Benjamin: without warning, at someTime the clock suddenly started going in the opposite direction! 
  Unfortunately, Benjamin has an important meeting very soon, and knows that at leavingTime he should leave the house so as to not be late. 
  Ben spent all his money on the clock, so has to figure out what time his clock will show when it's time to leave.
  Given the someTime at which the clock started to go backwards, find out what time will be shown on the curious clock at leavingTime.
  
  input:  someTime = "2016-08-26 22:40" and leavingTime = "2016-08-29 10:00"
  output: solution(someTime, leavingTime) = "2016-08-24 11:20"
*/

string solution(string someTime, string leavingTime) {
    const string FORMAT = "%Y-%m-%d %H:%M";  
    tm s{}, t{};
    istringstream iss(someTime), ist(leavingTime);
    
    iss >> get_time(&s, FORMAT.c_str());
    ist >> get_time(&t, FORMAT.c_str());
    
    const time_t bt = mktime(&s) - (mktime(&t) - mktime(&s));

    ostringstream oss;
    oss << put_time(gmtime(&bt), FORMAT.c_str());
    return oss.str();
}
