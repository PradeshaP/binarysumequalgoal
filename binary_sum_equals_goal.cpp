class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result=findGoal(nums,goal)-findGoal(nums,goal-1);
        return result;
    }
    int findGoal(vector<int>&nums,int goal)
    {
        int l=0,r=0,ct=0,sum=0;
        if(goal<0)
        return 0;
        while(r<nums.size())
        {
            sum=sum+nums[r];
            while(sum>goal)
            {
                sum=sum-nums[l];
                l++;

            }
            ct=ct+(r-l+1);
            r++;
        }
        return ct;
    }
};