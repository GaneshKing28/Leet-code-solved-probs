class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long b = x;
        long long reverse =0;
        while (x>0){
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        if (b == reverse){
            return true;
        }
        else{
            return false;
        }

    }
};