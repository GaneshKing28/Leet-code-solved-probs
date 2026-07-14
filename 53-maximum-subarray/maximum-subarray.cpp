class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currentsum = 0;
        for(int i=0;i<nums.size();i++){
            currentsum += nums[i];
            if(currentsum > maxsum){
                maxsum = currentsum;
            }
            if(currentsum < 0){
                currentsum =0;
            }
        }
        return maxsum;
    }
};