class Solution {
public:
    int smallestEvenMultiple(int n) {
        // return (n % 2 == 0) ? n : (n * 2);

        // if(n%2==0) return n;
        // else return n*2;
        // if(n & 1) return n;
        // else return n*2;
        return n << (n & 1);
    }
};