class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map; // chars to their counts
        int result =0;
        int left=0;
        int maxf=0;
        int len = s.size();
        for(int right=0; right<len;right++){
            map[s[right]]++;
            maxf = max(maxf,map[s[right]]);
            while(right-left+1-maxf >k){
                map[s[left]]--;
                left++;
            }
            result = max(result,right-left+1);
        }
        return result;
    }
};