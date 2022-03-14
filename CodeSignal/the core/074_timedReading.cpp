/*
  Help the teacher figure out how many words the boy has read by calculating the number of words in the text he has read, no longer than maxLength.
  
  input:  maxLength = 4 and text = "The Fox asked the stork, 'How is the soup?'"
  output: solution(maxLength, text) = 7
*/

int solution(int maxLength, string text) {
    int res = 0;
    string temp;
    text.push_back(' ');
    for (int i = 0; i < text.size(); ++i) {
        if (isalpha(text[i])) {
            temp += text[i];
            continue;
        }
        if (temp.size() > 0 && temp.size() <= maxLength)
            ++res;
        temp = "";
    }
    
    return res;
}
