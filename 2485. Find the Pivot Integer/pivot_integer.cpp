class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        for(int x=1;x<=n;x++){
            int currSum=x*(x+1)/2;
            if(currSum==(sum-currSum+x)){
                return x;
            }
        }
        return -1;
    }
};