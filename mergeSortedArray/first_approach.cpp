class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!nums2.empty())
        {
            vector<int> temp(m+n);
            std::merge(nums1.begin(),nums1.begin()+m,nums2.begin(),nums2.begin()+n,temp.begin());
            nums1 =temp;
        }}
};