class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int p = 1;
        while(x>0){
            int digit = x%10;
            sum += digit;
            p *= digit;
            x /=10;
        }
        int total = sum + p;
        if(n % total == 0) return true;
        else return false;
    }
};