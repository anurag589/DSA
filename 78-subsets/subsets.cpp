class Solution {

    void solve(vector<int> nums, int idx, vector<int> output  , vector<vector<int>>& ans ){
        if(idx >= nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,idx+1,output,ans);

        int ele = nums[idx];
        output.push_back(ele);
        solve(nums,idx+1,output,ans);
    }
public:

    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
          vector<int> output ;
          int idx = 0;
          solve(nums ,idx,output,ans) ;
          return ans;
    }
};