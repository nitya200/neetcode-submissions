class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<=n-k;i++){
            int maxi=nums[i];
            for(int j=i;j<i+k;j++){
                maxi=max(maxi,nums[j]);
                
            }
            result.push_back(maxi);
            
        }
        return result;
    }
};
