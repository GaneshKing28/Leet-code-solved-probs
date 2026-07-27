class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]-1)*(nums[j]-1) > maxproduct){
                    maxproduct =(nums[i]-1)*(nums[j]-1) ;
                }
            }
        }
        return maxproduct;
    }
};