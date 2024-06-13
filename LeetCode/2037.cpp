class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int maxPosition = max(findMax(seats), findMax(students));

        vector<int> differences(maxPosition, 0);
        for (int i = 0; i < seats.size(); i++) {
            differences[seats[i] - 1]++;
            differences[students[i] - 1]--;
        }

        int moves = 0;
        int unmatched = 0;
        for (int difference : differences) {
            moves += abs(unmatched);
            unmatched += difference;
        }

        return moves;
    }

private:
    int findMax(const vector<int>& arr) {
        int maxium = 0;
        for (int num : arr) {
            if (num > maxium) {
                maxium = num;
            }
        }
        return maxium;
    }
};