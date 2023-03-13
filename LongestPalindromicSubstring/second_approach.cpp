class Solution {
private:
void check(int&left, int&right, const int& len, string& s, string& result){
    while(left >=0 && right<len && s[left] == s[right]){
            if(right-left+1 > result.size()) result = s.substr(left,right-left+1);
            left--;
            right++;
        }
}
public:
    string longestPalindrome(string s) {
    string result= "";
    const int len = s.size();
    int left;
    int right; 
    for(int i=0; i<len;i++){
        left =i;
        right =i;
        check(left,right,len,s,result);
        left = i;
        right=i+1;
        check(left,right,len,s,result);      
    }
    return result;
    }
};