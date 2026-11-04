class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxo = 0;
        int ans = 0;
        for(int n : nums){
            maxo = max(n , maxo);
        }
        for(int x : nums){
            ans += maxo - x; 
        }
        return ans;
    }
};