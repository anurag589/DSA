class Solution {
public:

    string say(string &s){
        string ans = "";
        if(s.size() == 0){
            return "1";
        }
        for(int i = 0; i<s.size();i++){
            int cnt = 1;
            while(i<s.size() -1 && s[i] == s[i+1]){
                cnt++;
                i++;
            }
            ans += to_string(cnt);
            ans += s[i];
        }
        return ans;
    }
    string countAndSay(int n) {
        string temp ="" ;
        while(n--){
            temp = say(temp);
        }
        return temp;
    }
};