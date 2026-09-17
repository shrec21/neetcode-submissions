class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resvec;
        int s = nums.size();
        unordered_map<int, int> ht(s);
        for(int i=0; i<s; i++){
            int comp = target - nums[i];
            if(ht.find(comp) != ht.end()){
                resvec.push_back(ht[comp]);
                resvec.push_back(i);
                break;
            }
            ht[nums[i]] = i;
        }
        return resvec;
    }
};
