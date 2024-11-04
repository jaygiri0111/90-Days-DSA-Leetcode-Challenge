class Solution {
public:
    static bool mycomp(string a, string b) {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snum;
        for (int i = 0; i < nums.size(); i++) {
            snum.push_back(to_string(nums[i]));
        }
        sort(snum.begin(), snum.end(), mycomp);
        string ans = "";
        if(snum[0]=="0")
        {
            ans="0";
            return ans;
        }
        for (int i = 0; i < snum.size(); i++) {
           
            ans += snum[i];
            
        }
        return ans;
    }
};