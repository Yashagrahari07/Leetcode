class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int total=0;
        unordered_map<int,int> mpp;
        int sum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum-goal)!=mpp.end()){
                total+=mpp[sum-goal];
            }
            mpp[sum]++;
        }
        return total;
    }
};