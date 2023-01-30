class Solution {
public:
    int maxArea(vector<int>& height) {
        int lptr= 0;
        int rptr= height.size()-1;
        int lower;
        int area=0;
        int maxArea =0;
        while(lptr < rptr)
        {
            if(height[lptr] < height[rptr]) lower = height[lptr];
            else lower = height[rptr];
            area = (rptr-lptr) * lower;
            if(area > maxArea) maxArea = area;
            if(height[lptr] < height[rptr]) lptr++;
            else rptr--;
        }   
        return maxArea;
    }
};