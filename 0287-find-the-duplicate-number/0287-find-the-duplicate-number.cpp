class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int ans;
        for(int & t: nums) m[t]++;
        for(auto& t: m){
            if(t.second>1){
                ans = t.first;
            }
        }
        return ans;
    }
};