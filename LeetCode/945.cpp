class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int const n = nums.size();
        std::ranges::sort(nums);
        int dest = 0, ans = 0;
        for (int const& source : nums) {
            ans += max(dest - source, 0);
            dest = max(dest, source) + 1;
        }
        return ans;
    }
};