class Solution {
public:
    string reverseWords(string s) {
        // string ans; 
        // for(char t: s){
        //     string temp;
        //     if(t != " "){
        //         temp = temp + t;
        //     }
        //     if(t == " "){
        //         int n = temp.length();
        //         for(int i = 0; i < n/2; i++){
        //             temp[i] = temp[n-i];
        //         }
        //         ans = ans + temp + " ";
        //     }
        // }
        // return ans;
        string ans;
string temp;  // Initialize temp outside the loop

for (char t : s) {
    if (t != ' ') {
        temp = temp + t;
    } else {
        int n = temp.length();
        for (int i = 0; i < n / 2; i++) {
            char tmp = temp[i];
            temp[i] = temp[n - i - 1];
            temp[n - i - 1] = tmp;
        }
        ans = ans + temp + ' ';
        temp = "";  // Reset temp for the next word
    }
}

// Handle the last word (if any)
int n = temp.length();
for (int i = 0; i < n / 2; i++) {
    char tmp = temp[i];
    temp[i] = temp[n - i - 1];
    temp[n - i - 1] = tmp;
}
ans = ans + temp;

return ans;

    }
};