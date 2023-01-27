class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            for(int k=0; k<nums.size(); k++)
            {
                if(nums[i] == nums[k] && i!=k) return true;
            }
        }
        return false;
    }
};