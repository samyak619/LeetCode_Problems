class Solution {
public:
    string removeStars(string s) {
        stack<char> str;
        int n = s.length();
        int i = 0;
        string ans;
        while(i<n){
            if(s[i]!= '*') str.push(s[i]);
            else str.pop();
            i++;
        }
        while (!str.empty()) {
        ans += str.top();
        str.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};