class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int> ans;
       string s = "123456789";
       int lowlength = to_string(low).length();
       int highlength  = to_string(high).length();
       for(int len= lowlength;len <= highlength;len++){
        for(int i = 0; i<=9-len; i++){
            string temp = s.substr(i,len);
            int num = stoi(temp);
            if(num >= low && num <= high){
                ans.push_back(num);
            }
        }
       }
       return ans;
    }
};