/*
  Given a string, find out if it satisfies the IPv4 address naming rules.
  
  input:  inputString = "172.16.254.1"
  output: isIPv4Address(inputString) = true
*/

bool isIPv4Address(string inputString) {
    
    string tok;
    stringstream ss(inputString);
    int count = 0;
    while (getline(ss, tok, '.')){
        if (tok.size() == 0 || tok.size()>3) 
            return false;
        if(tok.size() > 1)
            if(tok[0] == '0')
                return false;
        
        for (int i = 0; i < tok.size(); i++)
            if (!isdigit(tok[i])) 
                return false;   
        int temp = atoi(tok.c_str());
        if (!(temp >= 0 && temp <= 255)) 
                return false;
            count++;

        }

    if (count != 4) 
        return false;

    return true; 
}
