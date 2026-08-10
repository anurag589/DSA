class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        int n = nums.size();
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                piv = i;
                break;
            }
        }
        if( piv == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1;i>=piv;i--){
            if(nums[piv] < nums[i]){
                swap(nums[piv],nums[i]);
                break;
            }
        }
        int e = n-1;
        int i = piv +1;
        while(i<e){
            swap(nums[i++],nums[e--]);
        }
    }
};