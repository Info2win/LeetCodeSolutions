class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        std::map<char,int> smap,tmap; // maps that holds count of chars
        for(int i=0; i<s.length();i++)
        {
            smap[s[i]] = smap[s[i]]+1;
            tmap[t[i]] = tmap[t[i]]+1;
        }
        for(int i=0; i< s.length();i++)
        {
            if(smap[s[i]] != tmap[s[i]]) return false;
        }
        return true;
    }
};