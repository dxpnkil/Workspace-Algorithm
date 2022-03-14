/*
  ou are implementing your own HTML editor. 
  To make it more comfortable for developers you would like to add an auto-completion feature to it.
  Given the starting HTML tag, find the appropriate end tag which your editor should propose.
  
  input:  startTag = "<button type='button' disabled>"
  output: solution(startTag) = "</button>"
*/

string solution(string startTag) {
    int pos = startTag.find(' ');
    string tag = startTag.substr(1, pos - 1);
    if(pos != string::npos)
        return "</" + tag + ">";
    else return "</" + tag;
}
