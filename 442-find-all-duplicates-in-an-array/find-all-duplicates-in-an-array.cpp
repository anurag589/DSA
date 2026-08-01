class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<int> v;
        // unordered_map<int,int> m;
        // for(int i = 0; i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // for(auto i: m){
        //     if(i.second > 1) v.push_back(i.first);
        // }
        // return v;
        vector<int> v;
        for(int i = 0; i<nums.size();i++){
            int num = abs(nums[i]);
            int idx = num-1;
            if(nums[idx] < 0) v.push_back(num);
            else{
                nums[idx] *= -1;
            }
        }
        return v;
    }
};