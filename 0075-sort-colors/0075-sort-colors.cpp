class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start, mid, end;
        int n = nums.size();
        end = n - 1;
        start = 0;
        for(int i = 0; i <= end;){
            if(nums[i] == 0){
                swap(nums[i], nums[start]);
                start++;
                i++;
            }
            else if(nums[i] == 1){
                i++;
            }
            else if(nums[i] == 2){
                swap(nums[i], nums[end]);
                end--;
            }
        }
    }
};