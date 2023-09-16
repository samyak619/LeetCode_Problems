class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans.push_back(s[0]);
        int n  = s.length();
        int i = 1;
        while(i<n){
            if(!ans.empty() && ans.back() == s[i])ans.pop_back();
            else ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
};