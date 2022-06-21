/*
    input:  sequence = [1, 3, 2, 1]
    output: almostIncreasingSequence(sequence) = false
    
    There is no one element in this array that can be removed in order to get a strictly increasing sequence.
    
    input:  sequence = [1, 3, 2]
    output: almostIncreasingSequence(sequence) = true
    
    You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can remove 2 to get the strictly increasing sequence [1, 3]
*/

bool almostIncreasingSequence(vector<int> sequence) {
    int removeCount = 0;
    if (sequence[0] >= sequence[1]){
        removeCount += 1;
    }
    int a = sequence.size();
    for(int j = 2; j < a; j++){
        if(sequence[j - 1] >= sequence[j]){
            removeCount++;
            if(sequence[j - 2] >= sequence[j]){
                sequence[j] = sequence[j - 1];
            }
        }
    }
    return (removeCount < 2);
}
