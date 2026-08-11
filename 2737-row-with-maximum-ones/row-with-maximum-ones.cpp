class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> v;
        int ans= 0,row=0;
        for(int i =0;i<mat.size();i++){
            int cnt=0;
            for(int j = 0; j<mat[0].size();j++){
                if(mat[i][j] == 1) cnt++;
            }
            if(ans < cnt){
                ans = cnt;
                row = i;
            }
        }
        v.push_back(row);
        v.push_back(ans);
        return v;
    }
};