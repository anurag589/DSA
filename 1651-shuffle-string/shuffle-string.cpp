class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        int i = 0;
        while(i<s.size()){
            res[indices[i]] = s[i];
            i++;
        }
        return res;
    }
};