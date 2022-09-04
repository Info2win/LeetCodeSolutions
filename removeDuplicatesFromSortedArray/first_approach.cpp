class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertion_place=0;
        for(int right=1; right<nums.size();right++)
        {
            if(nums[right]!=nums[insertion_place])
            {
                insertion_place++;
                nums[insertion_place] = nums[right];
            }
        }
        return insertion_place+1;
    }
};