class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int ans = arr[0];
        int oneDelete = INT_MIN;
        for(int i = 1; i<arr.size(); i++){
            int v1;
            if(oneDelete == INT_MIN){
                v1 = arr[i];
            }
            else{
                v1 = oneDelete +arr[i];
            }
            oneDelete = max(v1,noDelete);
            noDelete  = max(noDelete +arr[i] ,arr[i]);
            ans = max(ans ,{max(noDelete,oneDelete)});
        }
        return ans;
    }
};