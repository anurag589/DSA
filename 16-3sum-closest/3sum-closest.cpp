class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ansSum = 0;
        int maxSum = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] +nums[j] +nums[k];
                int diff = abs(sum - target);
                if(diff < maxSum){
                    maxSum = diff;
                    ansSum = sum;
                }
                if(sum == target ){
                    j++;
                    k--;
                }
                else if(sum > target) k--;
                else j++;
            }
        }
        return ansSum;
    }
};