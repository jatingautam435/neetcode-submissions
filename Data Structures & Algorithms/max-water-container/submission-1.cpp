class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int lp=0;
        int rp=n-1;
        while(lp<rp){
            int width=rp-lp;
            int height=min(heights[rp],heights[lp]);
            int area=height*width;

            ans=max(area,ans);
            if(heights[lp]<heights[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return ans;

        
    }
};
