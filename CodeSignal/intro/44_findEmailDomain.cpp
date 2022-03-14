/*
  An email address such as "John.Smith@example.com" is made up of a local part ("John.Smith"), an "@" symbol, then a domain part ("example.com")
  
  input:  prettyandsimple@example.com
  output: findEmailDomain(address) = "example.com"
*/

string findEmailDomain(string address) {
    return address.substr(address.rfind("@")+1, address.size()-1);
}

