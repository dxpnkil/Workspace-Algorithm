/*
  In the Land Of Chess, bishops don't really like each other. 
  In fact, when two bishops happen to stand on the same diagonal, they immediately rush towards the opposite ends of that same diagonal.
  Given the initial positions (in chess notation) of two bishops, bishop1 and bishop2, calculate their future positions. 
  Keep in mind that bishops won't move unless they see each other along the same diagonal.
  
  input:  bishop1 = "d7" and bishop2 = "f5"
  output: solution(bishop1, bishop2) = ["c8", "h3"]
*/

vector<string> solution(string bishop1, string bishop2) {
    if (bishop2 < bishop1)
        swap(bishop1,bishop2);
        
    if (bishop1[0] - bishop2[0] == bishop1[1] - bishop2[1]){
        while (bishop1[0] > 'a' && bishop1[1] > '1') {
            bishop1[0]--;
            bishop1[1]--;
        }
        while (bishop2[0] < 'h' && bishop2[1] < '8') {
            bishop2[0]++;
            bishop2[1]++;
        }
    } else if (bishop1[0] - bishop2[0] == bishop2[1] - bishop1[1]) {
        while (bishop1[0] > 'a' && bishop1[1] < '8'){
            bishop1[0]--;
            bishop1[1]++;
        }
        while (bishop2[0] < 'h' && bishop2[1] > '1') {
            bishop2[0]++;
            bishop2[1]--;
        }
    }
    return {bishop1,bishop2};
}
