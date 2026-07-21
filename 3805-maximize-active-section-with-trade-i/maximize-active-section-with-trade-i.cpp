class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int totalones = 0;
        int previouszerogroup = INT_MIN;
        int maxgain = 0;
        int i =0;
        while(i<n){
            int j = i+1;
            while(j<n && s[j] == s[i]){
                j++;
            }
            int currentlength = j - i;
            if(s[i]== '1'){
                totalones += currentlength;
            }
            else{
                maxgain = max(maxgain,previouszerogroup + currentlength);
                previouszerogroup = currentlength;
            }
            i = j;
        }
        return totalones + maxgain;
    }
};