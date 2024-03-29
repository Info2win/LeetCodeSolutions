class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int len = nums.size();
        long long result = 0;
        int count = 0;
        for(int i=0; i<len; i++){
            if(nums[i]==0) count++;
            else count = 0;
            result += count;
        }
        return result;
    }
};