class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int s = nums.size();
        vector<int> ans;
        unordered_map<int, int> ht;
        for(int i=0; i<s; i++){
            int num = nums[i];
            if(ht.find(num) != ht.end()){
                ht[num] +=1;
            }
            else{
                ht[num] = 1;
            }
        }
        
        vector<vector<int>> buck(s + 1);
        for (auto it : ht) {
            int fre = it.second;
            buck[fre].push_back(it.first);
        }

        int bsize = buck.size();
        for (int i = bsize - 1; i >= 0 && k > 0; i--) {
            for (int num : buck[i]) {
                if (k == 0) break;
                ans.push_back(num);
                k--;
            }
        }
        return ans;
    }
};
