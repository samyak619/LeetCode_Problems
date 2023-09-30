class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> a;
        int mul = 1, sum = 0;
        while(n > 0){
            a.push_back(n%10);
            n = n/10;
        }
        for(int t: a){
            mul = mul*t;
            sum += t;
            cout<<t<<" ";
        }
        return mul - sum;
    }
};