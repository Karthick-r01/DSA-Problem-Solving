class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        for(int i=0; i<n; i++) {
            result.push_back(nums[i]);
        }
        for(int i=0; i<n; i++) {
            result.push_back(nums[i]);
        }
        return result;
    }
};
