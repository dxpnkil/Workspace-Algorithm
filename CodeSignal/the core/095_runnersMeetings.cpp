/*
  Some people run along a straight line in the same direction. 
  They start simultaneously at pairwise distinct positions and run with constant speed (which may differ from person to person).
  If two or more people are at the same point at some moment we call that a meeting. 
  The number of people gathered at the same point is called meeting cardinality.
  For the given starting positions and speeds of runners find the maximum meeting cardinality assuming that people run infinitely long. 
  If there will be no meetings, return -1 instead.
  
  input:  startPosition = [1, 4, 2] and speed = [27, 18, 24]
  output: solution(startPosition, speed) = 3
*/

int solution(vector<int> startPosition, vector<int> speed) {
    int sz = startPosition.size();
    int res = 1;
    for (int i = 0; i < sz; i++){
        for (int j = i + 1; j < sz; j++) {
            int k = 0, cnt = 0;
            int p = startPosition[j] - startPosition[i];
            int s = speed[i] - speed[j];
            while (s && k < sz){
                bool check = (startPosition[k] - startPosition[i]) * s == 
                                (speed[i] - speed[k]) * p;
                if(check)   
                    cnt++;
                k++;
            }
            res = max(res, cnt);
        }
    }
    return res > 1 ? res : -1; 
}
