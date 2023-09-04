class Solution {
public:
    string frequencySort(string s) {
        // string ans;
        // vector<int> a;
        // unordered_map<char, int> m;
        // for (auto t : s) {
        //     m[t]++;
        // }
        // for (auto t : m)
        //     a.push_back(t.second);
        // sort(a.begin(), a.end(), greater<int>());
        // int i = a.size() - 1;
        // for (auto t : m) {
        //     if (a[i] == t.second) {
        //         for (int j = 0; j < t.second; j++) {
        //             ans = ans + t.first;
        //         }
        //         i--;
        //     }
        // }
        // return ans;
        string ans;
        vector<pair<int, char>> a;
        unordered_map<char, int> m;
        
        // Count the frequency of each character
        for (auto t : s) {
            m[t]++;
        }
        
        // Store the frequency and character in a vector of pairs
        for (auto t : m) {
            a.push_back({t.second, t.first});
        }
        
        // Sort the vector in descending order based on frequency
        sort(a.rbegin(), a.rend());
        
        // Construct the sorted string
        for (auto t : a) {
            for (int i = 0; i < t.first; i++) {
                ans += t.second;
            }
        }
        
        return ans;
    }
};