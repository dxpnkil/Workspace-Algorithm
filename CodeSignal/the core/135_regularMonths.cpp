/*
  In an effort to be more innovative, your boss introduced a strange new tradition: the first day of every month you're allowed to work from home. 
  You like this rule when the day falls on a Monday, because any excuse to skip rush hour traffic is great!
  You and your colleagues have started calling these months regular months. 
  Since you're a fan of working from home, you decide to find out how far away the nearest regular month is, given that the currMonth has just started.
  
  input:  currMonth = "02-2016"
  output: solution(currMonth) = "08-2016"
*/

string solution(string currMonth) {
    struct tm tm = { 0, };
    strptime(currMonth.c_str(), "%m-%Y", &tm);
    tm.tm_mday = 1;
    tm.tm_wday = 0;
    while (tm.tm_wday != 1) {
        if (++tm.tm_mon >= 12) {
            tm.tm_mon = 0;
            tm.tm_year++;
        }
        mktime(&tm);
    }
    char res[16];
    strftime(res, sizeof(res), "%m-%Y", &tm);
    return res;
}
