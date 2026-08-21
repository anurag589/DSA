class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int l = 0;
        int h = 0;
        int ans = INT_MAX;
        int sum = 0;
        while(h<n){
            sum += nums[h];
            while(sum >= target){
                ans = min(ans,h-l+1);
                sum -= nums[l++];
            }
            h++;
        }
        return ans == INT_MAX ?0:ans;
    }
};