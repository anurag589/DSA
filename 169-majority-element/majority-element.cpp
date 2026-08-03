class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0; i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans;
        int maxi = nums.size()/2;
        for(auto i:m){
            if(maxi <i.second){
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};