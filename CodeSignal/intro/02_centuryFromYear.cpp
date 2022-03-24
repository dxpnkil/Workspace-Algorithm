/* 
    Given a year, return the century it is in. 
    The first century spans from the year 1 up to and including the year 100,
        spans from the year 1 up to and including the year 100, year 200, etc.
    
    input:  year = 1905
    output: centuryFromYear(year) = 20
*/

int centuryFromYear(int year) {
    int q, r;
    q = year / 100;
    r = year % 100;
    if (r == 0)
        return q;
    else return q + 1;
}
