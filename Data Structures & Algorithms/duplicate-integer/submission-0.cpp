class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int s = nums.size();
        unordered_map<int, int> mp(s);
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            if(mp[num] > 0){
                return true;
            }
            else{
                mp[num] += 1;
            }
        }
        return false;
    }
};