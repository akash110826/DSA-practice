class Solution {
public:
    int maxArea(vector<int>& height) {
       int lp = 0;
       int rp = height.size()-1;
       int mostWater = 0;
       while(lp < rp){
        int w = rp - lp;
        int h = min(height[lp],height[rp]);
        int currwater = w*h;
        mostWater = max(currwater,mostWater);
        if(height[lp]<height[rp]){
            lp++;            
        }else{
            rp--;
        }
       }
       return mostWater;
       
    }
};