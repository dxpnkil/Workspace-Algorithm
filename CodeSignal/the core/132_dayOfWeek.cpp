/*
  Given the current birthdayDate, determine the number of years until it will fall on the same day of the week.
  
  input:  birthdayDate = "02-01-2016"
  output: solution(birthdayDate) = 5
*/

int solution(string birthdayDate) {
    int year = stoi(birthdayDate.substr(6,string::npos));
    int month = stoi(birthdayDate.substr(0,2));
    int day = stoi(birthdayDate.substr(3,2));
    
    auto isLeap = [](int year) {
       return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    };
    
    bool preLeap = month <= 2;
    bool onLeap = month == 2 && day == 29;
    int totalDays = 365;
    
    for(int nextYear = year + 1; true; nextYear++, totalDays+=365) {   
        if(isLeap(nextYear - preLeap))
            totalDays++;     
        if(onLeap && !isLeap(nextYear))
            continue;     
        if(totalDays%7 == 0)
            return nextYear - year;      
    }  
    return 0;   
}
