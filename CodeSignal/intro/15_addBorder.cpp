/*
  Given a rectangular matrix of characters, add a border of asterisks(*) to it.
  
  input:  picture = ["abc",
                     "ded"]
  output: addBorder(picture) = ["*****",
                                "*abc*",
                                "*ded*",
                                "*****"]
 */
 
  vector<string> addBorder(vector<string> picture) {
    for (int i = 0; i < picture.size(); i++) {
        picture[i].insert(0,"*");
        picture[i].append("*");
    }
    
    string border = string(picture[0].size(), '*');
    picture.insert(picture.begin(), border);
    picture.push_back(border);
    
    return picture;
}
