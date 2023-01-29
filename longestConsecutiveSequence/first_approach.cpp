class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest=1;
        int count =1;
        std::sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1;++i){
            if((nums[i] == nums[i+1]-1)) count++;
            else if (nums[i]==nums[i+1]) continue;
            else count=1;
            if(count > longest) longest=count;
        }
        return longest;
    }
};