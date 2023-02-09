class TimeMap {
private:
unordered_map<string,vector<pair<string,int>>> map;
public:
    TimeMap() {}
    void set(string key, string value, int timestamp) {
        map[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        string result="";
        int left=0;
        int right=map[key].size()-1;
        int mid;
        while(left<=right){
            mid = left + (right-left) / 2;
            if(map[key][mid].second <= timestamp){
                result = map[key][mid].first;
                left = mid+1;
            }
            else right = mid-1;
        }
        return result;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */