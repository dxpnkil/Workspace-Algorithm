/*
  Given two version strings composed of several non-negative decimal fields separated by periods ("."), both strings contain equal number of numeric fields. 
  Return true if the first version is higher than the second version and false otherwise.
  
  input:  ver1 = "1.2.2" and ver2 = "1.2.0"
  output: solution(ver1, ver2) = true
*/

bool solution(string ver1, string ver2) {
    vector<int> v1;
    vector<int> v2;
    istringstream s1(ver1);
    istringstream s2(ver2);

    string temp;
    while(getline(s1, temp, '.'))
        v1.push_back(stoi(temp));
        
    while(getline(s2, temp, '.'))
        v2.push_back(stoi(temp));
        
    return v1 > v2;
}
