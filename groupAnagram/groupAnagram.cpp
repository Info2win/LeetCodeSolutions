class Solution {
private:
    string getKey(string str)
    {
        std::vector<int> count(26);
        for(int i=0; i<str.size();i++)
        {
            count[str[i]-'a']++;
        }
        string key = "";
        for(int i=0; i<26; i++)
        {
            key.append(to_string(count[i]+'a'));
        }
        return key;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> map;
        std::vector<std::vector<string>> result;
        for(int i=0; i<strs.size(); i++)
        {
            string key = getKey(strs[i]);
            map[key].push_back(strs[i]);
        }
        for(auto const& [key,value] : map)
        {
            result.push_back(value);
        }
        return result; 
    }
    
};