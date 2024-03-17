class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int currSum=0, result=0;
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            currSum += (nums[i]==1)? 1 : -1;
            if(mpp.find(currSum)!=mpp.end()){
                result = max(result, i - mpp[currSum]);
            }
            else{
                mpp[currSum] = i;
            }
        }
        return result;
    }
};