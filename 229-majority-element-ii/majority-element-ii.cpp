class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        map<int, int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxi = nums.size()/3;
        for(auto i :m){
            if(maxi < i.second){
                v.push_back(i.first);
            }
        }
        return v;
    }
};