// only add open parantheses if open < n
// only add closing parantheses if closed < open
// valid IIF open == closed && closed == n 
using std::string;
class Solution {
private:
        std::vector<string> result;
        int pairCount;
    void backtrack(int openCount, int closedCount, string str){
        if(openCount == pairCount && closedCount == pairCount){
            result.push_back(str);
            return;
        }
        if (openCount < pairCount){
            backtrack(openCount+1,closedCount, str + "(");
        }
        if (openCount > closedCount){
            backtrack(openCount,closedCount+1, str + ")");
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        pairCount = n;
        backtrack(0,0,"");
        return result;
    }
};