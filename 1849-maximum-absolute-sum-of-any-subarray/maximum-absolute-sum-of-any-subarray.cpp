class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int currSum = nums[0];
       int maxSum = nums[0];
       int endSum = nums[0];
       int minSum = nums[0];

       for(int i = 1; i<nums.size();i++){
        currSum = max(nums[i],(currSum +nums[i]));
        maxSum = max(maxSum , currSum);

        endSum = min(nums[i],(endSum +nums[i]));
        minSum = min(minSum ,endSum);
       }
       return max(maxSum,abs(minSum));
    }
};