class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool a = false;
        for(int i = 0; i<=30;i++){
            int ans = pow(2,i);
            if(n==ans){
                a = true;
                break;
            }
        }
        return a;
    }
};