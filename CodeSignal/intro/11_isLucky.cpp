/*
    Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if the sum of
    the first half of the digits is equal to the sum of the second half.
    Given a ticket number n, determine if it's lucky or not.

    input:  n = 1230;
    output: isLucky(n) = true;
*/
bool isLucky(int n){
    string a = to_string(n);
    int half = a.length() / 2;
    int sum = 0;
    int reSum = 0;
    for (int i=0; i< half; i++){
        sum += +a[i];
    }
    for (int j=half; j< a.length(); j++){
        reSum += +a[j];
    }

    if(sum != reSum){
        return false;
    }
    else{
        return true;
    }
}
