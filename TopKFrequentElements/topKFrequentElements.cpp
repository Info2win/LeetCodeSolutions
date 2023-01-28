class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        std::unordered_map<int,int> map;
        for (int i=0; i<size; i++){
            map[nums[i]]++;
        }
        std::vector<std::vector<int>> buckets(size+1);
        for(auto const& [key,val] : map){
            buckets[val].push_back(key);
        }
        std::vector<int> result;
        for(int i=size; i >=0; i--){
            if(result.size() == k){
                break;
            }
        result.insert(result.end(),buckets[i].begin(),buckets[i].end());
        }
       return result;
    }
};