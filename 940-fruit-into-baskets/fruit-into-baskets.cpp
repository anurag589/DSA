class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0;
        map<int,int>m;
        int ans = -1;
        for(int h= 0; h<n;h++){
            m[fruits[h]]++;
            while(m.size() >2){
                m[fruits[l]]--;
                if(m[fruits[l]]==0){
                    m.erase(fruits[l]);
                }
                l++;
            }
            if(m.size() == 2 || m.size() < 2){
                int len = h-l+1;
                ans = max(ans,len);
            }
        }
        return ans;
    }
};