class Solution {
public:
    int maxArea(vector<int>& height) {
         
       int lp = 0;
       int rp = height.size()-1;
       int ans = 0;
       while(lp<rp){
       int  width=rp-lp;
       int ht = min(height[lp],height[rp]);
       int current_water = width*ht;
       ans = max(current_water,ans);
       height[lp]<height[rp]?lp++:rp--;
       }
            return ans;

        }
        
    
};