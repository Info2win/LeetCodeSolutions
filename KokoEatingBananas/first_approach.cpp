class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int left=1;
       int right = *max_element(piles.begin(),piles.end());
       int result = right;
       int mid;
       long int hours=0;
       int size = piles.size();
        while (left<=right){
            mid = left + (right-left) / 2;
            hours=0;
            for(int i=0; i<size;i++){
                hours += ceil((double)piles[i]/mid);
            }
            if(hours<=h){
                result = min(result,mid);
                right = mid-1;
            }
            else left = mid+1;
        }
       return result;
    }
};