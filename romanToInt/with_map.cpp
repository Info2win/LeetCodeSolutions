class Solution {
private:
    unordered_map<string,int> map = {{"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000},{"IV",4},{"IX",9},{"XL",40},{"XC",90},{"CD",400},{"CM",900}};
public:
    int romanToInt(string s) {
        int result=0;
        for(int i=0; i<s.size();i++)
        {
            if(map.find(s.substr(i,2))!= map.end())
                result += map[s.substr(i++,2)];
            else
                result += map[s.substr(i,1)];
        }
        return result;
        
    }
};