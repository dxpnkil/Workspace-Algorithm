/*  
  John Doe likes solutions very much, and he was very happy to hear that his country's government decided to introduce yet another one. 
  He heard that the new solution will be celebrated each year on the xth week of month, on weekDay.
  Your task is to return the day of month on which the solution will be celebrated in the year yearNumber
  
  input:  x = 3, weekDay = "Wednesday", month = "November", and yearNumber = 2016
  output: solution(x, weekDay, month, yearNumber) = 16
*/

int solution(int x, string weekDay, string month, int yearNumber) {
    vector<string> dayNames= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	vector<string> monNames = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int wday = find(dayNames.begin(),dayNames.end(), weekDay) - dayNames.begin();
	struct tm tm = { 0, };
	tm.tm_year = yearNumber - 1900;
	tm.tm_mon = find(monNames.begin(), monNames.end(), month) - monNames.begin();
	for (int day = 1; day < 32; ++day) {
		tm.tm_mday = day;
		mktime(&tm);
		if (tm.tm_mday != day) 
            break;
		if (tm.tm_wday == wday && --x == 0) 
            return tm.tm_mday;
	}
	return -1;
}
