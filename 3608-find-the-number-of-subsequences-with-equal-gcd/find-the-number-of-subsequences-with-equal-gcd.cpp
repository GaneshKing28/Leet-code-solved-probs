class Solution {
public:
    static constexpr int MOD = 1'000'000'007;
    int subsequencePairCount(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(),nums.end());
        vector<vector<int>> dp(maxNum + 1,vector<int>(maxNum + 1 , 0));
        dp[0][0] = 1;
        for(int num : nums){
            vector<vector<int>> newDp = dp;
            for(int g1 = 0; g1 <= maxNum; g1++){
                for(int g2 = 0;g2 <= maxNum; g2++){
                    if(dp[g1][g2] == 0)
                    continue;
                    int newG1 = gcd(g1,num);
                    newDp[newG1][g2] = (newDp[newG1][g2] + dp[g1][g2]) % MOD;
                    int newG2 = gcd(g2,num);
                    newDp[g1][newG2] = (newDp[g1][newG2] + dp[g1][g2]) % MOD;
                }
            }
            dp = move(newDp);
        }
        long long ans = 0;
        for(int g =1;g <= maxNum;g++){
            ans = (ans + dp[g][g]) % MOD;
        }
        return (int)ans;
    }
};