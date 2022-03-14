/*
  During your most recent trip to Codelandia you decided to buy a brand new CodePlayer, a music player that (allegedly) can work with any possible media format. 
  As it turns out, this isn't true: the player can't read lyrics written in the LRC format. 
  It can, however, read the SubRip format, so now you want to translate all the lyrics you have from LRC to SubRip.
  Since you are a pro programmer, you're happy to implement a function that, given lrcLyrics and songLength, returns the lyrics in SubRip format.
  
  input:  rcLyrics = ["[00:12.00] Happy birthday dear coder,",
             "[00:17.20] Happy birthday to you!"]
          and songLength = "00:00:20"
  output: solution(lrcLyrics, songLength) = [
            "1",
            "00:00:12,000 --> 00:00:17,200",
            "Happy birthday dear coder,",
            "",
            "2",
            "00:00:17,200 --> 00:00:20,000",
            "Happy birthday to you!"
          ]
*/

vector<string> solution(vector<string> lrcLyrics, string songLength) {
    auto adZ = [](int s, int n){
        string r = "0000" + to_string(s);
        return r.substr(r.size() - n, n);
    };
    
    auto split = [&adZ](string s){
        int h = 0;
        int m = stoi(s.substr(0, 2));
        int sec = stoi(s.substr(3, 2));
        int x = stoi(s.substr(6, 2));
        if(m > 59){
            h = m / 60;
            m %= 60;
        }
        string r = adZ(h, 2) + ":" + adZ(m, 2) + ":" + adZ(sec, 2) + "," + adZ((x * 10), 3);
        return r;
    };
    
    auto split2 = [](string s){
        auto f1 = s.find_first_of(" ");
        auto f2 = s.find("\"");
        if(f1 != std::string::npos)
            return s.substr(f1 + 1, f2 - f1 - 1);
        return string("");
    };
    
    vector<string> res;
    for(int i = 0; i < lrcLyrics.size(); i++){
        if(i != 0)
            res.push_back("");
        res.push_back(to_string(i + 1));
        string t1 = split(lrcLyrics[i].substr(1, 8));
        string t2 = (i == (lrcLyrics.size() - 1))? (songLength + ",000"):
            split(lrcLyrics[i + 1].substr(1, 8));
        res.push_back(t1 + " --> " + t2);
        string p = split2(lrcLyrics[i]);
        res.push_back(p);
    }
    return res;
}
