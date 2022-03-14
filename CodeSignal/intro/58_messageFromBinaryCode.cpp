/*
  You are taking part in an Escape Room challenge designed specifically for programmers. 
  In your efforts to find a clue, you've found a binary code written on the wall behind a vase, and realized that it must be an encrypted message. 
  After some thought, your first guess is that each consecutive 8 bits of the code stand for the character with the corresponding extended ASCII code.
  Assuming that your hunch is correct, decode the message.
  
  input:  code = "010010000110010101101100011011000110111100100001"
  output: messageFromBinaryCode(code) = "Hello!"
*/

string messageFromBinaryCode(string code) {
    string res;
    int pos = 0;
    while (pos < code.size()) {
        
        string word = code.substr(pos, 8);
        pos += 8;
        
        bitset<8> bset(word);
        int n = bset.to_ulong();
        res += char(n);
    }
    return res;
}
