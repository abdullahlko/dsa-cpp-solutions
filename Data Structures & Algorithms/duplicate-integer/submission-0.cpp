class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n-2; i++){
            int cnt = 0;
            for(int j=i+1; j<=n-1; j++){
            if(nums[j]==nums[i]) cnt++;
            }
        if(cnt) return true;
        }
        return false;
    }
};