class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        /**
        vector<int> k;
        int l=0, r=nums.size()-1;
        sort(nums.begin(), nums.end());
        while(l<=r) {
            int mid = (l+r)/2;
            if(nums[mid]==target)   k.push_back(mid);
            if(nums[mid]>target)    r=mid-1;
            else    l=mid+1;
        }
        return k;
        **/
        vector<int> k;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==target) k.push_back(i);
        }
        return k;
    }
};
