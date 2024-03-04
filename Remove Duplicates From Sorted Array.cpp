class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n==0)
            return 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i);
                i--;
                n--;
            }
        }
        return n;
    }
};
