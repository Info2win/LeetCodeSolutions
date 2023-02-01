using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int count = 0;
        int size = temperatures.size();
        vector<int> result(size,0);
        for(int i=0; i<size; i++){
            count=0;
            for(int j=i+1; j<size;j++){
                count++;
                if(temperatures[j] > temperatures[i]){
                    result[i] = count;
                    break;
                }
            }
        }
        return result;
    }
};