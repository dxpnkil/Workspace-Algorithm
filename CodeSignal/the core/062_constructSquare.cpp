/*
  Given a string consisting of lowercase English letters, 
    find the largest square number which can be obtained by reordering the string's characters 
    and replacing them with any digits you need (leading zeros are not allowed) where same characters always map to the same digits 
    and different characters always map to different digits.
  If there is no solution, return -1
  
  input:  s = "ab"
  output: solution(s) = 81
*/

int solution(string s) {
    int counted[27] = {0,};
    int cnt[10];
    int j = 0;
    int sum = 0;
    
    for(int i = 0; i<s.size(); i++){
        if(counted[s[i] - 'a'] == 0 ){
            counted[s[i] - 'a']++;
            cnt[j]= count(s.begin(), s.end(), s[i]);
            ++j;
        }
    }
    for(int i = 0; i < j; i++)
        sum += cnt[i];
    sort(cnt, cnt+j);

    int n = pow(pow(10,sum), 0.5);
    for(int l = n; l >= 0  ; l--){
        string str = to_string(int(pow(l,2)));
        int k = 0;
        int countedStr[11] = {0,};
        int cntStr[10];
        for(int i = 0; i<s.size(); i++){
            if(countedStr[str[i] - '0'] == 0 ){
                countedStr[str[i] - '0']++;
                cntStr[k]= count(str.begin(), str.end(), str[i]);
                ++k;
            }
        }
        sort(cntStr, cntStr + k);

        if( equal(cnt, cnt+j, cntStr, cntStr+k) )
            return stoi(str);
    }
    return -1;
}
