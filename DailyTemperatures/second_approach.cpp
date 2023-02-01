using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        stack<pair<int,int>> stack; // [index,temp]
        vector<int> result(size,0);
        for(int i=0; i<size;++i){
            int currentDay=i;
            int currentTemp = temperatures[i];
            while(!stack.empty() && stack.top().second < currentTemp){
            int prevDay = stack.top().first;
            int prevTemp = stack.top().second;
            stack.pop();
            result[prevDay] = currentDay - prevDay;
            }
            stack.push({currentDay,currentTemp});
        }
        return result;
    }
};