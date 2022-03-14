/*
  Your Math teacher takes education very seriously, and hates it when a class is missed or canceled for any reason. 
  He even made up the following rule: if a class is missed because of a holiday, the teacher will compensate for it with a makeup class after school.
  You're given an array, daysOfTheWeek, with the weekdays on which your teacher's classes are scheduled, and holidays,
      representing the dates of the holidays throughout the academic year (from 1st of September in year to 31st of May in year + 1). 
  How many times will you be forced to stay after school for a makeup class because of holiday conflicts in the current academic year?
  
  input:  year = 2015, daysOfTheWeek = [2, 3], and holidays = ["11-04", "02-22", "02-23", "03-07", "03-08", "05-09"]
  output: solution(year, daysOfTheWeek, holidays) = 3
*/

int solution(int year, vector<int> daysOfTheWeek, vector<string> holidays) {
    int res = 0;
    unordered_set<int> scheduledClass;
    
    for (auto day : daysOfTheWeek)
        scheduledClass.insert(day % 7);
    
    for (const string &day : holidays) {
        struct tm tm = { 0, };
        sscanf(day.c_str(), "%d-%d", &tm.tm_mon, &tm.tm_mday);
        tm.tm_year = year + (--tm.tm_mon < 8) - 1900;
        mktime(&tm);
        res += scheduledClass.find(tm.tm_wday) != scheduledClass.end();
    }
    return res;
}
