class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = nums[0];
        for(int x : nums) {
            mini = min(mini, x);
        }
        
        int ans = 0;
        for(int x : nums) {
            ans += x - mini;
        }
        return ans;
    }
};