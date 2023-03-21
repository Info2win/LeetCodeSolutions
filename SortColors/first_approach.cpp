class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int i,left = 0;
        int right = len-1;
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
                //do not increment i as we need to check 1 more time if we swapped nums[i] with nums[right]
            }
            else i++;
        }
    }
};