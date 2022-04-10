/*
  You are given an array of desired filenames in the order of their creation. 
  Since two files cannot have equal names, the one which comes later will have an addition to its name in a form of (k), 
    where k is the smallest positive integer such that the obtained name is not used yet.
  Return an array of names that will be given to the files.
  
  input:  ["doc", "doc", "image", "doc(1)", "doc"]
  output: fileNaming(names) = ["doc", "doc(1)", "image", "doc(1)(1)", "doc(2)"]
*/

vector<string> fileNaming(vector<string> names) {
    vector < int > cnt;
    for(int i = 0; i < names.size(); i++)
        cnt.push_back(1);
    for(int i = 1; i < names.size(); i++){
        for( int j = 0; j <i; j++){
            if(names[i] == names[j]){
                for (int k = 0; k < i; k++){
                    string temp = names[i] + "(" + to_string(cnt[j]) + ")";
                    if ( temp == names[k] ){
                        cnt[j]++;
                    }
                }
                names[i] = names[i] + "(" + to_string(cnt[j]) + ")";
                cnt[j]++;
            }
        }
    } 
    return names;
}
