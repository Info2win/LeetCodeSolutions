class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertion_place=0;
        for(int iterator=1; iterator<nums.size();iterator++)
        {
            if(nums[iterator]!=nums[insertion_place])
            {
                insertion_place++;
                nums[insertion_place] = nums[iterator];
            }
        }
        return insertion_place+1;
    }
};