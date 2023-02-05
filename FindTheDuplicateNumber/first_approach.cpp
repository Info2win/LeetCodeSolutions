class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> copy(nums);
        sort(copy.begin(),copy.end());
        for(int i=0; i<copy.size()-1; ++i){
            if(copy[i] == copy[i+1]) return copy[i];
        }
        return 0;
    }
};