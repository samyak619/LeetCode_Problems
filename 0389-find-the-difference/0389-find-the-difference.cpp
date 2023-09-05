class Solution {
public:
    char findTheDifference(string s, string t) {
        long long a = 0,b = 0;
        for(auto c: s){
            a = a + int(c);
        }
        for(auto v: t){
            b = b + int(v);
        }
        return char(b-a);
    }
};