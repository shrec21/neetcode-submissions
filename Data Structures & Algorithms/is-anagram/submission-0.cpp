class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.length();
        int tlen = t.length();
        if(slen != tlen) return false;
        unordered_map<char, int> mp(slen);

        for(auto its : s){
            mp[its] += 1;
        }

        for (auto itt : t ){
            if(mp[itt] == 0) return false;
            mp[itt] -= 1;
        }

        return true;
    }
};
