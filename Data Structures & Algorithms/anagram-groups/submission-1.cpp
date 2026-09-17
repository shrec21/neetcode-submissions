class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int len = strs.size();
        unordered_map<string, vector<string>> ht;
        for(int i=0; i<len; i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            ht[str].push_back(strs[i]);
        }

        for (const auto & [ key, value ] : ht) {
            ans.push_back(value);
        }

        return ans;
    }
};
