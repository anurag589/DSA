class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum += nums[i];
        }
        int left = 0;
        // int right = 0;
        for(int i = 0; i<nums.size();i++){
            int right = sum - nums[i] - left;
            if(right == left) return i;
            left += nums[i];
        }
        return -1;




        //  int s = 0;
        // int e = nums.size()-1;
        // int mid = s + (e-s)/2;
        // while(s<e){
        //     if(nums[mid] >= nums[0]){
        //         s = mid+1;
        //     }
        //     else  {
        //         e = mid;
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return s;
    }
};