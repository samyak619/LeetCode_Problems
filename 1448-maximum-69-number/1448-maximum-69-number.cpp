class Solution {
public:
    int maximum69Number (int num) {
        string ans = to_string(num);
        for(auto &t: ans){
            if(t == '6'){
                t = '9';
                break;
            }
        }
        return stoi(ans);
    }
};