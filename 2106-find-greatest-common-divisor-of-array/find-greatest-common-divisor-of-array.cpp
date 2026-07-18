class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest = nums[0];
        int smallest = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<smallest){
                smallest = nums[i];
            }
            if(nums[i]> largest){
                largest = nums[i];
            }
    }
    return gcd(smallest,largest);
    }
};