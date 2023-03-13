class Solution {
public:
    bool isPalindrome (string s){
        int len = s.size();
        int left = 0;
        int right = len - 1;
        while(left!=right && left < right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
        }
        return true;
        
    }
    string longestPalindrome(string s) {
        int len = s.size();
        if(len == 1) return s;
        if(len == 2 && s[0] != s[1]) return s.substr(0,1); 
        int left = 0;
        int right = 1;
        string result= s.substr(0,1);
        string sub;

        for(int i=0; i<len-1;i++){
            for(int j=i+1; j<len;j++){
                sub = s.substr(i,j-i+1);
                if(isPalindrome(sub) && sub.length()>result.length()) result = sub;
            }

        }
        return result;
    }
};