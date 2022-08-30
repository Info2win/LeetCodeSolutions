class Solution {
public:
    bool isPalindrome(int x) {
            string mirror = to_string(x);
            reverse(mirror.begin(),mirror.end());
            if(mirror == to_string(x)) return true;
            else return false;
        }        
};