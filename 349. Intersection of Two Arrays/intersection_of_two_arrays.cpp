class Solution {
public:

    /*  Approach 1: Sorting + Two Pointer
        Sort both arrays. Uses Two pointers to compares values and includes checks to avoid duplicate entries in the result. 

        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int> v;
            int n=nums1.size(), m=nums2.size();
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
            int i=0, j=0;
            while(i<n && j<m){
                if(nums1[i]==nums2[j]){
                    if(v.empty() || v.back()!=nums1[i]){
                        v.push_back(nums1[i]);
                    }
                    i++;
                    j++;
                }
                else if(nums1[i]>nums2[j]){
                    j++;
                }
                else{
                    i++;
                }
            }
            return v;
        }
    */

    /*  Approach 2: Using the map
        Store all the values of one of the arrays in a map. Traverse the second array and check if the number of occurrences
        of that value in the first array, using the map, is greater than 0. If the occurrences are greater than 0, it indicates
        the first occurrence of the element. Consequently, push the element to the vector, and also set the number of occurrences
        of that element in the map to 0. This ensures that if the element occurs again in the future, it won't be pushed to the 
        vector as it has already been added earlier.
    */ 

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> mpp;
        for(auto it:nums1){
            mpp[it]++;
        }
        for(auto it:nums2){
            if(mpp[it]>0){
                v.push_back(it);
                mpp[it]=0;
            }
        }
        return v;
    }
};