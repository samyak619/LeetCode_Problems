class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int pair = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 0; j < nums.size(); j++){
        //         if(i != j && nums[i] == nums[j]) {
        //             pair++;
        //         }
        //     }
        // }
        // return pair/2;
        int pair = 0;
        unordered_map<int, int> m;
        for(int& t: nums){
            m[t]++;
        }
        for(auto t: m){
            if(t.second > 1){
                int n = t.second;
                pair = pair + (n*(n-1))/2;
            }
        }
        return pair;
    }
};