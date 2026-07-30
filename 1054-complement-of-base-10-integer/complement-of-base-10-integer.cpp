class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0){
            return 1;
        }
        int p = n;
        int mask = 0;

        while(p != 0)
        {
           mask = (mask << 1) |1;
           p = p >> 1; 

        }
        int ans = mask & (~n);
        return ans;
    }
};