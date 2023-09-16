class Solution {
public:
    string removeStars(string s) {
        stack<char> str;
        int n = s.length();
        int i = 0;
        while(i<n){
            if(s[i]!= '*') str.push(s[i]);
            else str.pop();
            i++;
        }
        s = "";
        while (!str.empty()) {
        s += str.top();
        str.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};