/* 
    input:  statues = [6, 2, 3, 8]
    output: makeArrayConsecutive2(statues) = 3
    
    We need statues of sizes 4, 5 and 7
*/

int makeArrayConsecutive2(vector<int> statues) {
    sort (statues.begin(), statues.end());
    int x= statues.size();
    int res = statues[x-1] - statues[0] +1 - x;
    return res;
}
