class Solution {
public:

    bool valid(char ch){
        if((ch >='a' && ch<='z') || (ch >='A' && ch<='Z') ||(ch >='0' && ch<='9')){
            return true;
        }
        else{
            return false;
        }
    }

    int lowerCase(char ch){
        if((ch >='a' && ch<='z') || (ch >='0' && ch<='9') ){
            return ch;
        }
        else{
            return ch - 'A' + 'a';
        }
    }

    bool checkPalindrome(string s){
        int st = 0; 
        int e = s.size()-1;
        while(st<=e){
            if(s[st]!=s[e]) return false;
            else{
                st++;
                e--;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {

        string ans = "";
        for(int i = 0; i<s.length();i++){
            if(valid(s[i])){
                ans.push_back(s[i]);
            }
        }

        for(int i = 0; i<ans.size(); i++){
            ans[i]= lowerCase(ans[i]);
        }
        return checkPalindrome(ans);
        
    }
};