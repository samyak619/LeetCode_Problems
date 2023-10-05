class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(int & t: nums){
            m[t]++;
        }
        int n = nums.size()/3;
        for(auto t: m){
            if(t.second > n){
                ans.push_back(t.first);
            }
        }
        return ans;
    }
};