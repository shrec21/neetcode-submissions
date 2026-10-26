class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVol = 0;
        int start = 0, end = heights.size() - 1;
        int vol = 0;
        
        while(start <= end){
            vol = (end - start) * min(heights[start], heights[end]);
            maxVol = max(vol, maxVol);
            if(heights[start] > heights[end]){
                end -- ;
            }
            else {
                start ++ ;
            }
        }

        return maxVol;
    }
};
