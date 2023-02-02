class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int size = position.size();
        vector<pair<int,double>> pairs;
        int  result =0;
        for(int i=0; i< size; ++i){
            double time = (double) (target - position[i]) / speed[i];
            pairs.push_back({position[i],time});
        }
        sort(pairs.begin(),pairs.end(),greater());
        double maxTime = 0.0;
        for(int i=0; i<size; ++i){
            double time = pairs[i].second;
            if(time >maxTime){
                maxTime = time;
                result++;
            }
        }
        return result;
    }
};