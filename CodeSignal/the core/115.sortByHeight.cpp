/*
  Some people are standing in a row in a park. There are trees between them which cannot be moved. Your task
  is to rearrange the people by their heights in a non-descending order without moving the trees. People can be very tall!
  
  input:  a = [-1, 150, 190, 170, -1, -1, 160, 180]
  output: sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190]
*/

vector<int> solution(vector<int> a) {
    vector < int > temp  = a;
    sort(temp.begin(), temp.end());
    int i = temp.size() -1;
    int k = i;
    while ( i>= 0){
        if(a[i] != -1){
            a[i] = temp[k--];
        }
        i--;
    }
    return a;
}
