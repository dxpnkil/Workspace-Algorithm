/*
  To prepare his students for an upcoming game, the sports coach decides to try some new training drills. 
  To begin with, he lines them up and starts with the following warm-up exercise.
  Unfortunately some students (not all of them, but at least one) can't tell left from right, meaning they always turn right when they hear 'L' and left when they hear 'R'. 
  The coach wants to know how many times the students end up facing the same direction.
  
  input:  commands = "LLARL"
  output: solution(commands) = 3
*/

int solution(string commands) {
    int res = 0;
    int flag = 0;
    for(int i=0; i < commands.size(); i++){
        if(commands[i] == 'L' || commands[i] == 'R')
            flag++;
        else{
            if(flag %2 == 0){
                res++;
                continue;
            }
        }
        if(flag %2 == 0)
            res++;
    }
    return res;
}

  
  
