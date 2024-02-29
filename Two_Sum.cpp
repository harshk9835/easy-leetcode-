class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i=0; i<nums.size();i++){

            int x = nums[i];
            int y = target -nums[i];
            if(s.count(y)==1){
                return {i, m[y]};
            }
            else{
                s.insert(x);
            }
            m[x] = i;

        }
        return {-1,-1};
    }
};
