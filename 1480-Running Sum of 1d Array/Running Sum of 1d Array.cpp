class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> k;
        int sum=0;
        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];
            k.push_back(sum);
        }
        return k;
    }
};
