class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        unordered_set<char> set;
        int left=0;
        int result=0;
        for(int right=0; right<len;++right){
            while(set.find(s[right]) != set.end()){
                set.erase(s[left]);
                left++;
            }
            result = max(result,right-left+1);
            set.insert(s[right]);
        }
        return result;
    }
};