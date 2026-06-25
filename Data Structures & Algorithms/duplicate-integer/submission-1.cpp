class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int maxcount=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            
            if(nums[i]==nums[i+1]){
                count=count+1;
                maxcount=max(maxcount,count);
            }

            if(count>=1){
                return true;
            }
            

        }
        return false;
        
        
    }
};