class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=val){
                nums[t]=nums[i];
                t++;
                
            }
            
        }
        return t;
        
    }
};
