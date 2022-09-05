class Solution {
public:
       int climbStairs(int n) {
        int temp;
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        for(int i=0;i<n-1;i++){
            temp = v[0];
            v[0] += v[1];
            v[1] = temp;
        }
        return v[0];
    }
};