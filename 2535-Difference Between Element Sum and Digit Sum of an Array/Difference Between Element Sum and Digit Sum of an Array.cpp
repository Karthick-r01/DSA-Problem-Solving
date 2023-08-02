class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s1=0, s2=0;
        for(int i=0;i<nums.size();i++) {
            s1+=nums[i];
            while(nums[i]!=0) {
                int r = nums[i] % 10;
                s2+=r;
                nums[i]=nums[i]/10;
            }
        }
        return s1-s2;
    }
};
