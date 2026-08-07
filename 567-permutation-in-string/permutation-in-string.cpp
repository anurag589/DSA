class Solution {
public:


    bool isEqual(int arr[26],int brr[26]){
        for(int i = 0; i<26;i++){
            if(arr[i] != brr[i]){
                return 0;
            }
        }
        return 1;
    }



    bool checkInclusion(string s1, string s2) {
        int count1[26];
        for(int i = 0; i<s1.length();i++){
            count1[s1[i] -'a']++;
        }

        int len = s1.length();
        int i = 0;
        int count2[26];
        while( i < len && i <s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }

        if(isEqual(count1,count2)) return 1;

        while(i <s2.length()){
            char newChar = s2[i]-'a';
            count2[newChar]++;

            char oldChar = s2[i-len]-'a';

            count2[oldChar]--;
            i++;
            if(isEqual(count1,count2)) return 1;
        }
        return 0;
    }
};