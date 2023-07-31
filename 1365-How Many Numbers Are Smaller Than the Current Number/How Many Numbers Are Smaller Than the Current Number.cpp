class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> m;
        //sort(nums.begin(), nums.end());
        int c;
        for(int i=0; i<nums.size(); i++) {
            c=0;
            for(int j=0; j<nums.size(); j++) {
                if(nums[i]>nums[j]) c++;
            }
            m.push_back(c);
        }
        return m;
    }
};
