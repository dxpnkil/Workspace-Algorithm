/*
  HTML tables allow web developers to arrange data into rows and columns of cells. They are created using the <table> tag. 
  Its content consists of one or more rows denoted by the <tr> tag. 
  Further, the content of each row comprises one or more cells denoted by the <td> tag, and content within the <td> tags is what site visitors see in the table. 
  For this task assume that tags have no attributes in contrast to real world HTML.
  
  input:  table = "<table><tr><td>1</td><td>TWO</td></tr><tr><td>three</td><td>FoUr4</td></tr></table>", row = 0, and column = 1
  output: solution(table, row, column) = "TWO"
*/

string solution(string table, int row, int col) {
    regex r("(?:<tr>(.*?)</tr>){" + to_string(row+1) + "}");
    regex c("(?:<td>(.*?)</td>){" + to_string(col+1) + "}");

    smatch m;
    if (!regex_search(table, m, r))
        return "No such cell";  
        
    table = m[1].str();
    if (!regex_search(table, m, c))
        return "No such cell";
    return m[1].str();
}
