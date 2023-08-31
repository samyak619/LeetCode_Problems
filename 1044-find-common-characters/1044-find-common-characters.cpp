class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         vector<string> ans;
        unordered_map<char, int> m;

        // Initialize the frequency map with the characters from the first word
        for (auto a : words[0]) {
            m[a]++;
        }

        // Update the frequency map based on other words
        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> temp;
            for (auto a : words[i]) {
                temp[a]++;
            }
            for (auto it = m.begin(); it != m.end(); ) {
                if (temp.find(it->first) == temp.end()) {
                    it = m.erase(it);
                } else {
                    it->second = min(it->second, temp[it->first]);
                    ++it;
                }
            }
        }

        // Add common characters to the answer vector
        for (auto t : m) {
            for (int i = 0; i < t.second; i++) {
                ans.push_back(string(1, t.first));
            }
        }

        return ans;
    }
};